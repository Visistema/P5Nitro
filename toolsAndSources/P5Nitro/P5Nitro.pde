/*
Copyright (C) 2011 by all P5Nitro contributors
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

// 10th July 2011 ---------------------------------------
// some code had to be commented-out in the template files because nme has changed
// just look for COMMENTEDOUTBECAUSEOFwriteUTFBytesToBuffergetPixelAtERROR
// and for COMMENTEDOUTBECAUSEOFgetPixelAtERROR


import javax.swing.JFileChooser;

import java.applet.*;
import java.awt.*;
import java.awt.image.*;
import java.awt.event.*;
import java.util.*;
import java.io.File;

// this import is to make the window transparent, so you don't see anything
// it would be better to not open the window at all,
// but I couldn't manage.
// import com.sun.awt.AWTUtilities;


public class P5Nitro extends PApplet {
  // These are shortcuts for building a number of paths later on.
  // Ideally I'd like to initialise these string here but I can't,
  // because datapath("") doesn't return the right value (i.e the
  // path of the data directory of the sketch) if placed here, for
  // some reason. So I prefer to initialise them all later
  // in the setup method.
  String compiledSketchesDirectoryRelativeToDataPath;
  String compiledSketchesDirectory;
  String templatesDirectory;
  String compiledSketchFromEditorDirectory;
  String theDataPath;
  String compiledSketchAppDirectory;
  String sourceSketchesDirectoryRelativeToDataPath;
  String sourceSketchesDirectory;
  String sourceSketchFromEditorDirectory;

  // These two booleans toggle between two modes: the flash
  // mode and the opengl mode. In the flash mode, we render the
  // whole frame to a bitmap, in each frame. The problem with that
  // is in that mobile devices the bus between cpu and gpu is very
  // small - so the bitmap is generated on the cpu and slowly sent
  // to the gpu. That's slow.
  // The opengl mode instead sends the opengl primitives rather than
  // the sw-generated bitmap. So it is faster, but there are some
  // troubles in that openGL doesn't normally retain the content
  // of a frame to the next - which is needed in processing. So
  // the opengl mode needs a change to the nme api to retain a frame
  // to the next.
  static boolean openGL = true;
  static boolean flash = false;

  // these are from the old TextAreaApp
  static color outerBackgroundColor;
  static int myColorBackground;
  static TextArea theTextArea;
  static boolean control = false;
  // P5NitroMode is when the fancy editor that resembles processing
  // comes out.
  static boolean P5NitroMode = true;


  // This main method needs to be added when you use the "export as app"
  // functionality of Processing in OSX. If you don't, then the generated
  // OSX application doesn't start, it throws an error upon launch saying
  // that main is not found
  /*
   public static void main(String args[]) {
   PApplet.main(new String[] {  "P5Nitro" });
   }
   */

  // this is to make the window transparent so that the user is not confused
  // by an empty window that does nothing.
  /*
  public void init() {
   frame.removeNotify();
   frame.setUndecorated(true);
   super.init();
   }
   */

  public void setup() {

    // this paragraph of code makes the
    // window completely transparent and 1 pixel wide
    // so there is no disruption
    /*
    size(1,1);
     frame.setAlwaysOnTop(true);
     frame.setLocation(0,0);
     AWTUtilities.setWindowOpaque(frame, false);
     AWTUtilities.setWindowOpacity(frame, 0.0f);
     */

    // now setup some shortcuts for some frequently used directories
    theDataPath = dataPath("");
    compiledSketchesDirectoryRelativeToDataPath = "/../../../CompiledSketches/";
    compiledSketchesDirectory = theDataPath+compiledSketchesDirectoryRelativeToDataPath;
    templatesDirectory = theDataPath+"/templates/";
    compiledSketchFromEditorDirectory = compiledSketchesDirectory+"SketchFromP5NitroEditor/";
    compiledSketchAppDirectory =  compiledSketchFromEditorDirectory+"OSXApp/";
    sourceSketchesDirectoryRelativeToDataPath = "../../../Sketches/";
    sourceSketchesDirectory = theDataPath+"../../../Sketches/";
    sourceSketchFromEditorDirectory = sourceSketchesDirectory+"SketchFromP5NitroEditor/";

    outerBackgroundColor = color(255);
    // the last boolean is the P5Nitro mode

    if (P5NitroMode) {
      size(500, 535);
      theTextArea = new TextArea(this, 10, 133, 470, 340, color(240, 240, 240), color(20, 20, 20), 15, false, true);
    }
    else {
      size(1000, 400);
      theTextArea = new TextArea(this, 0, 30, 300, 300, color(240, 240, 240), color(20, 20, 20), 15, false, false);
    }
  }

  void draw() {
    background(outerBackgroundColor);
    // Currently the whole of the text area is repainted each frame,
    // which is quite wasteful, we'll have to optimize this later on
    theTextArea.draw(this);
  }

  public void doTheTranslation() {

    Vector sketchesInSketchesDirectory = null;
    sketchesInSketchesDirectory = new FileTraversal().nonRecursivelyListDirectoriesInside( new File(sourceSketchesDirectory));

    println("System.getProperty(\"user.dir\"): "+System.getProperty("user.dir"));
    println("dataPath(\"\"): "+theDataPath);
    println("sketchPath(\"\"): "+sketchPath(""));


    for (int i = 0; i < sketchesInSketchesDirectory.size(); i++) {

      // we figure out the name of the sketch, it's the name of the deepest
      // directory in the path, so we get it with a little string
      // manipulation.
      String[] allDirectoriesInPath = sketchesInSketchesDirectory.get(i).toString().split("\\/");
      String sketchName = allDirectoriesInPath[allDirectoriesInPath.length-1];

      String compiledSketchDirectory = compiledSketchesDirectory+sketchName;
      String compiledSketchXCodeDirectory = compiledSketchDirectory+"/XCodeProject" + sketchName;
      String compiledSketchTranslatedToHaxeDirectory = compiledSketchDirectory+"/translatedToHaxe/";

      //if (!sketchName.equals("BubblesGAMEv26") && !sketchName.equals("Chain") && !sketchName.equals("CountDownAprilFoolsV1")) continue;

      if (!sketchName.equals("SketchFromP5NitroEditor")) continue;
      //if (!sketchName.equals("Network")) continue;
      //if (!sketchName.equals("KarmaTwitterV1")) continue;
      //if (!sketchName.equals("SimpleNetwork")) continue;
      //if (!sketchName.equals("TwoTriangles")) continue;
      //if (!sketchName.equals("shapeDebugging")) continue;
      //if (!sketchName.equals("MoonCyclesCDv2")) continue;
      //if (!sketchName.equals("Astro_MeteorsV8")) continue;
      //if (!sketchName.equals("Astro_MeteorsV7")) continue;
      //if (!sketchName.equals("ALineInProcessing")) continue;
      //if (!sketchName.equals("BubblesGAMEv27")) continue;
      //if (!sketchName.equals("BubblesGAMEv26")) continue;
      //if (!sketchName.equals("ReadWriteFile")) continue;
      //if (!sketchName.equals("Chain")) continue;
      //if (!sketchName.equals("CountDownAprilFoolsV1")) continue;
      //if (!sketchName.equals("Text2")) continue;
      //if (!sketchName.equals("BridgingToTouchInterface")) continue;
      //if (!sketchName.equals("Sound")) continue;
      //if (!sketchName.equals("PIDayV3")) continue;
      //if (!sketchName.equals("Particles")) continue;
      //if (!sketchName.equals("BubblesGAMEv25")) continue;
      //if (!sketchName.equals("Simplest")) continue;
      //if (!sketchName.equals("IntralevelCountDown")) continue;
      //if (!sketchName.equals("Text1")) continue;
      //if (!sketchName.equals("BubbleGameMenu")) continue;

      println("Treating directory: " + sketchName );

      //Translator.transformedProgram;
      Translator.transformedProgram = SketchMerger.mergeSketchInDirectory(new File (sketchesInSketchesDirectory.get(i)+""), this);
      if (Translator.transformedProgram != null) {
        Translator.PAppletMethodsTemplate = FileLoaderAndSaver.loadFile(new File(templatesDirectory+"PAppletMethods.template"), this);

        Translator.transformProgram();


        // remove all the stuff about this sketch in the compiled directory
        ShellCommandExecutor.runCommandInDirectory("rm -rdf "+sketchName+"/", compiledSketchesDirectory);

        String outputFileName;

        String MainHeaderTemplate = FileLoaderAndSaver.loadFile(new File(templatesDirectory+"MainHeader.template"), this);
        if (flash)
          MainHeaderTemplate = MainHeaderTemplate.replaceAll("/\\*ifFlash", "").replaceAll("endifFlash\\*/", "");
        else if (openGL)
          MainHeaderTemplate = MainHeaderTemplate.replaceAll("/\\*ifOpenGL", "").replaceAll("endifOpenGL\\*/", "");
        Translator.transformedProgram = Translator.transformedProgram.replaceAll("class\\s*Main\\s*extends\\s*Bitmap\\s*\\{", MainHeaderTemplate);
        outputFileName = compiledSketchTranslatedToHaxeDirectory+"Main.hx"; 
        FileLoaderAndSaver.saveFile( new File(outputFileName), Translator.transformedProgram, this);

        // PGraphics spawns two versions of itself: the openGL accelerated version used for the main
        // application and the bitmap version used for the attached children
        // note that if the flash flag is set then they are both software-rendered bitmaps

          String PGraphicsTemplate = FileLoaderAndSaver.loadFile(new File(templatesDirectory+"PGraphics.template"), this);
        outputFileName = compiledSketchTranslatedToHaxeDirectory+"PGraphicsRoot.hx"; 
        if (flash)
          PGraphicsTemplate = PGraphicsTemplate.replaceAll("/\\*ifFlash", "").replaceAll("endifFlash\\*/", "");
        else if (openGL)
          PGraphicsTemplate = PGraphicsTemplate.replaceAll("/\\*ifOpenGL", "").replaceAll("endifOpenGL\\*/", "");
        PGraphicsTemplate = PGraphicsTemplate.replaceAll("class\\s*PGraphics\\s*extends", "class PGraphicsRoot extends");
        FileLoaderAndSaver.saveFile( new File(outputFileName), PGraphicsTemplate, this);

        PGraphicsTemplate = FileLoaderAndSaver.loadFile(new File(templatesDirectory+"PGraphics.template"), this);
        outputFileName = compiledSketchTranslatedToHaxeDirectory+"PGraphics.hx"; 
        PGraphicsTemplate = PGraphicsTemplate.replaceAll("/\\*ifFlash", "").replaceAll("endifFlash\\*/", "");
        FileLoaderAndSaver.saveFile( new File(outputFileName), PGraphicsTemplate, this);

        String PImageTemplate = FileLoaderAndSaver.loadFile(new File(templatesDirectory+"PImage.template"), this);
        outputFileName = compiledSketchTranslatedToHaxeDirectory+"PImage.hx";
        FileLoaderAndSaver.saveFile( new File(outputFileName), PImageTemplate, this);

        String NMLProjectFileTemplate = FileLoaderAndSaver.loadFile(new File(templatesDirectory+"NmmlProjectFile.template"), this);
        outputFileName = compiledSketchTranslatedToHaxeDirectory+"P5NitroSketch.nmml"; 
        NMLProjectFileTemplate = NMLProjectFileTemplate.replaceAll("SKETCHWIDTH", Translator.frameSizeXFromSource+"").replaceAll("SKETCHHEIGHT", Translator.frameSizeYFromSource+"").replaceAll("FRAMERATE", Translator.frameRateFromSource+"");

        FileLoaderAndSaver.saveFile( new File(outputFileName), NMLProjectFileTemplate, this);

        // now copy all additional haxe files
        System.out.println("copy all the additional haxe files");
        DirectoryCopier.copyDirectory( new File(templatesDirectory+"additionalHaxeFilesToBeCopiedToProject/"), new File(compiledSketchTranslatedToHaxeDirectory) );

        // now copy all additional haxe files that are sketch-specific
        DirectoryCopier.copyDirectory(new File(sketchPath + "/data/additionalHaxeFilesToBeCopiedToProject"), new File(compiledSketchTranslatedToHaxeDirectory) );
      
      } // end of if (Translator.transformedProgram != null)
      
      XCodeProjectMaker.maxeXCodeProject( sketchName, templatesDirectory, compiledSketchXCodeDirectory, compiledSketchDirectory, this, sketchesInSketchesDirectory.get(i)+"");
      
    if (P5NitroMode) {
        DirectoryCopier.copyDirectory(new File(compiledSketchTranslatedToHaxeDirectory), new File(compiledSketchAppDirectory) );
        
        println("creating the directory where the app will be");
        ShellCommandExecutor.runCommandInDirectory("mkdir " + compiledSketchAppDirectory, theDataPath);

        println("creating bin directory");
        ShellCommandExecutor.runCommandInDirectory("mkdir bin", compiledSketchAppDirectory);

        println("copying the cached bin directory");
        ShellCommandExecutor.runCommandInDirectory("cp -RLp " + theDataPath + "/cachedBin/ ./bin/", compiledSketchAppDirectory);

        println("chmodding the build binaries script");
        ShellCommandExecutor.runCommandInDirectory("chmod 777 buildTheBinaries.sh", compiledSketchAppDirectory);

        println("launching the binary generator" );  
        ShellCommandExecutor.runCommandInDirectory("./buildTheBinaries.sh", compiledSketchAppDirectory);

        print("opening the app");
        ShellCommandExecutor.runCommandInDirectory("open P5NitroSketch.app", compiledSketchAppDirectory + "/bin/cpp/Mac");
    }

    }
  }

  void keyPressed() {
    if (key == PConstants.CODED) {
      if (keyCode == PConstants.CONTROL) {
        control = true;
        return;
      }
    } 
    theTextArea.keyPressed(key, keyCode, control);
  }

  void keyReleased() {
    if (keyCode == CONTROL) {
      control = false;
    }
  }

  void mousePressed() {

    System.out.println("mouseX:"+mouseX);
    System.out.println("mouseY:"+mouseY);

    if (P5NitroMode) {    
      if (mouseX > 20 && mouseX < 62 && mouseY > 15 && mouseY < 56) {
        println("pressed play");

        //System.out.println(theDataPath);
        //System.out.println(ShellCommandExecutor.runCommand("pwd"));
        File savingAs = new File(sourceSketchFromEditorDirectory +"/sketch.pde");
        FileLoaderAndSaver.saveFile(savingAs, theTextArea.allText, this);

        doTheTranslation();
        return;
      }

      else if (mouseX > 86 && mouseX < 133 && mouseY > 15 && mouseY < 56) {
        println("pressed stop");
        ShellCommandExecutor.runCommandInDirectory("./killProcessByName.sh P5NitroSketch", theDataPath);
      }
    }
    theTextArea.mousePressed(mouseX, mouseY);
  }
}

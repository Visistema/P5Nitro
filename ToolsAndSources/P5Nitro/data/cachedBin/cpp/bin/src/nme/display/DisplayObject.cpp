#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_display_BlendMode
#include <nme/display/BlendMode.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_EventPhase
#include <nme/events/EventPhase.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_filters_BitmapFilter
#include <nme/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_nme_geom_ColorTransform
#include <nme/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_geom_Transform
#include <nme/geom/Transform.h>
#endif
namespace nme{
namespace display{

Void DisplayObject_obj::__construct(Dynamic inHandle,::String inType)
{
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",48)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",49)
	this->nmeParent = null();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",50)
	this->nmeHandle = inHandle;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",51)
	this->nmeID = ::nme::display::DisplayObject_obj::nme_display_object_get_id(this->nmeHandle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",52)
	this->nmeSetName(((inType + HX_CSTRING(" ")) + this->nmeID));
}
;
	return null();
}

DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct(inHandle,inType);
	return result;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > result = new DisplayObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *DisplayObject_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::nme::display::IBitmapDrawable_obj)) return operator ::nme::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

::String DisplayObject_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::toString")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",54)
	return this->nmeGetName();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,toString,return )

::nme::display::Graphics DisplayObject_obj::nmeGetGraphics( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetGraphics")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",58)
	if (((this->nmeGraphicsCache == null())))
		this->nmeGraphicsCache = ::nme::display::Graphics_obj::__new(::nme::display::DisplayObject_obj::nme_display_object_get_grapics(this->nmeHandle));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",60)
	return this->nmeGraphicsCache;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetGraphics,return )

::nme::display::DisplayObjectContainer DisplayObject_obj::nmeGetParent( ){
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetParent")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",63)
	return this->nmeParent;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetParent,return )

::nme::display::Stage DisplayObject_obj::nmeGetStage( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetStage")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",67)
	if (((this->nmeParent != null())))
		return this->nmeParent->nmeGetStage();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",69)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetStage,return )

::nme::display::DisplayObject DisplayObject_obj::nmeFindByID( int inID){
	HX_SOURCE_PUSH("DisplayObject_obj::nmeFindByID")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",74)
	if (((this->nmeID == inID)))
		return hx::ObjectPtr<OBJ_>(this);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",76)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeFindByID,return )

double DisplayObject_obj::nmeGetX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetX")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",79)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_x(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetX,return )

double DisplayObject_obj::nmeSetX( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetX")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",82)
	::nme::display::DisplayObject_obj::nme_display_object_set_x(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",83)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetX,return )

double DisplayObject_obj::nmeGetY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetY")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",86)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_y(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetY,return )

double DisplayObject_obj::nmeSetY( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetY")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",89)
	::nme::display::DisplayObject_obj::nme_display_object_set_y(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",90)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetY,return )

double DisplayObject_obj::nmeGetScaleX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetScaleX")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",93)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_scale_x(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetScaleX,return )

double DisplayObject_obj::nmeSetScaleX( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetScaleX")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",96)
	::nme::display::DisplayObject_obj::nme_display_object_set_scale_x(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",97)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetScaleX,return )

double DisplayObject_obj::nmeGetScaleY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetScaleY")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",100)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_scale_y(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetScaleY,return )

double DisplayObject_obj::nmeSetScaleY( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetScaleY")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",103)
	::nme::display::DisplayObject_obj::nme_display_object_set_scale_y(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",104)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetScaleY,return )

double DisplayObject_obj::nmeGetMouseX( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetMouseX")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",107)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_mouse_x(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetMouseX,return )

double DisplayObject_obj::nmeGetMouseY( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetMouseY")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",108)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_mouse_y(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetMouseY,return )

double DisplayObject_obj::nmeGetRotation( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetRotation")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",110)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_rotation(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetRotation,return )

double DisplayObject_obj::nmeSetRotation( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetRotation")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",113)
	::nme::display::DisplayObject_obj::nme_display_object_set_rotation(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",114)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetRotation,return )

bool DisplayObject_obj::nmeGetCacheAsBitmap( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetCacheAsBitmap")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",117)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_cache_as_bitmap(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetCacheAsBitmap,return )

bool DisplayObject_obj::nmeSetCacheAsBitmap( bool inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetCacheAsBitmap")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",120)
	::nme::display::DisplayObject_obj::nme_display_object_set_cache_as_bitmap(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",121)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetCacheAsBitmap,return )

bool DisplayObject_obj::nmeGetVisible( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetVisible")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",124)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_visible(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetVisible,return )

bool DisplayObject_obj::nmeSetVisible( bool inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetVisible")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",127)
	::nme::display::DisplayObject_obj::nme_display_object_set_visible(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",128)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetVisible,return )

double DisplayObject_obj::nmeGetWidth( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetWidth")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",132)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_width(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetWidth,return )

double DisplayObject_obj::nmeSetWidth( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetWidth")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",135)
	::nme::display::DisplayObject_obj::nme_display_object_set_width(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",136)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetWidth,return )

double DisplayObject_obj::nmeGetHeight( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetHeight")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",139)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_height(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetHeight,return )

double DisplayObject_obj::nmeSetHeight( double inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetHeight")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",142)
	::nme::display::DisplayObject_obj::nme_display_object_set_height(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",143)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetHeight,return )

::String DisplayObject_obj::nmeGetName( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetName")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",146)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_name(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetName,return )

::String DisplayObject_obj::nmeSetName( ::String inVal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetName")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",149)
	::nme::display::DisplayObject_obj::nme_display_object_set_name(this->nmeHandle,inVal);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",150)
	return inVal;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetName,return )

::nme::display::BlendMode DisplayObject_obj::nmeGetBlendMode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetBlendMode")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",155)
	int i = ::nme::display::DisplayObject_obj::nme_display_object_get_blend_mode(this->nmeHandle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",156)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::BlendMode >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetBlendMode,return )

::nme::display::BlendMode DisplayObject_obj::nmeSetBlendMode( ::nme::display::BlendMode inMode){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetBlendMode")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",160)
	::nme::display::DisplayObject_obj::nme_display_object_set_blend_mode(this->nmeHandle,inMode->__Index());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",161)
	return inMode;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetBlendMode,return )

::nme::geom::Rectangle DisplayObject_obj::nmeGetScale9Grid( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetScale9Grid")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",166)
	return (  (((this->nmeScale9Grid == null()))) ? ::nme::geom::Rectangle(null()) : ::nme::geom::Rectangle(this->nmeScale9Grid->clone()) );
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetScale9Grid,return )

::nme::geom::Rectangle DisplayObject_obj::nmeSetScale9Grid( ::nme::geom::Rectangle inRect){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetScale9Grid")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",171)
	this->nmeScale9Grid = (  (((inRect == null()))) ? ::nme::geom::Rectangle(null()) : ::nme::geom::Rectangle(inRect->clone()) );
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",172)
	::nme::display::DisplayObject_obj::nme_display_object_set_scale9_grid(this->nmeHandle,this->nmeScale9Grid);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",173)
	return inRect;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetScale9Grid,return )

::nme::geom::Rectangle DisplayObject_obj::nmeGetScrollRect( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetScrollRect")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",178)
	return (  (((this->nmeScrollRect == null()))) ? ::nme::geom::Rectangle(null()) : ::nme::geom::Rectangle(this->nmeScrollRect->clone()) );
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetScrollRect,return )

::nme::geom::Rectangle DisplayObject_obj::nmeSetScrollRect( ::nme::geom::Rectangle inRect){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetScrollRect")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",183)
	this->nmeScrollRect = (  (((inRect == null()))) ? ::nme::geom::Rectangle(null()) : ::nme::geom::Rectangle(inRect->clone()) );
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",184)
	::nme::display::DisplayObject_obj::nme_display_object_set_scroll_rect(this->nmeHandle,this->nmeScrollRect);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",185)
	return inRect;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetScrollRect,return )

::nme::display::DisplayObject DisplayObject_obj::nmeSetMask( ::nme::display::DisplayObject inObject){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetMask")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",190)
	this->mask = inObject;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",191)
	::nme::display::DisplayObject_obj::nme_display_object_set_mask(this->nmeHandle,(  (((inObject == null()))) ? Dynamic(null()) : Dynamic(inObject->nmeHandle) ));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",192)
	return inObject;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetMask,return )

Dynamic DisplayObject_obj::nmeSetBG( Dynamic inBG){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetBG")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",197)
	if (((inBG == null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",198)
		::nme::display::DisplayObject_obj::nme_display_object_set_bg(this->nmeHandle,(int)0);
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",200)
		::nme::display::DisplayObject_obj::nme_display_object_set_bg(this->nmeHandle,inBG);
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",201)
	return inBG;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetBG,return )

Dynamic DisplayObject_obj::nmeGetBG( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetBG")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",206)
	int i = ::nme::display::DisplayObject_obj::nme_display_object_get_bg(this->nmeHandle);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",207)
	if (((((int(i) & int((int)16777216))) == (int)0)))
		return null();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",209)
	return (int(i) & int((int)16777215));
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetBG,return )

Array< ::nme::filters::BitmapFilter > DisplayObject_obj::nmeSetFilters( Array< ::nme::filters::BitmapFilter > inFilters){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetFilters")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",214)
	if (((inFilters == null()))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",215)
		this->nmeFilters = null();
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",218)
		this->nmeFilters = Array_obj< ::nme::filters::BitmapFilter >::__new();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",219)
		{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",219)
			int _g = (int)0;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",219)
			while((_g < inFilters->length)){
				__SAFE_POINT
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",219)
				::nme::filters::BitmapFilter filter = inFilters->__get(_g);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",219)
				++(_g);
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",220)
				this->nmeFilters->push(filter->clone());
			}
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",222)
	::nme::display::DisplayObject_obj::nme_display_object_set_filters(this->nmeHandle,this->nmeFilters);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",223)
	return inFilters;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetFilters,return )

Array< ::nme::filters::BitmapFilter > DisplayObject_obj::nmeGetFilters( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetFilters")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",228)
	if (((this->nmeFilters == null())))
		return Array_obj< ::nme::filters::BitmapFilter >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",229)
	Array< ::nme::filters::BitmapFilter > result = Array_obj< ::nme::filters::BitmapFilter >::__new();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",230)
	{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",230)
		int _g = (int)0;
		Array< ::nme::filters::BitmapFilter > _g1 = this->nmeFilters;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",230)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",230)
			::nme::filters::BitmapFilter filter = _g1->__get(_g);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",230)
			++(_g);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",231)
			result->push(filter->clone());
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",232)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetFilters,return )

Void DisplayObject_obj::nmeOnAdded( ::nme::display::DisplayObject inObj,bool inIsOnStage){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeOnAdded")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",237)
		if (((inObj == hx::ObjectPtr<OBJ_>(this)))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",239)
			::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::ADDED,true,false);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",240)
			evt->target = inObj;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",241)
			this->dispatchEvent(evt);
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",244)
		if ((inIsOnStage)){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",246)
			::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::ADDED_TO_STAGE,false,false);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",247)
			evt->target = inObj;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",248)
			this->dispatchEvent(evt);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeOnAdded,(void))

Void DisplayObject_obj::nmeOnRemoved( ::nme::display::DisplayObject inObj,bool inWasOnStage){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeOnRemoved")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",254)
		if (((inObj == hx::ObjectPtr<OBJ_>(this)))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",256)
			::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::REMOVED,true,false);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",257)
			evt->target = inObj;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",258)
			this->dispatchEvent(evt);
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",261)
		if ((inWasOnStage)){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",263)
			::nme::events::Event evt = ::nme::events::Event_obj::__new(::nme::events::Event_obj::REMOVED_FROM_STAGE,false,false);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",264)
			evt->target = inObj;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",265)
			this->dispatchEvent(evt);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeOnRemoved,(void))

::nme::display::DisplayObjectContainer DisplayObject_obj::nmeSetParent( ::nme::display::DisplayObjectContainer inParent){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetParent")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",271)
	if (((inParent == this->nmeParent)))
		return inParent;
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",274)
	if (((this->nmeParent != null())))
		this->nmeParent->nmeRemoveChildFromArray(hx::ObjectPtr<OBJ_>(this));
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",277)
	if (((bool((this->nmeParent == null())) && bool((inParent != null()))))){
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",279)
		this->nmeParent = inParent;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",280)
		this->nmeOnAdded(hx::ObjectPtr<OBJ_>(this),(this->nmeGetStage() != null()));
	}
	else{
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",282)
		if (((bool((this->nmeParent != null())) && bool((inParent == null()))))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",284)
			bool was_on_stage = (this->nmeGetStage() != null());
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",285)
			this->nmeParent = inParent;
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",286)
			this->nmeOnRemoved(hx::ObjectPtr<OBJ_>(this),was_on_stage);
		}
		else{
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",289)
			this->nmeParent = inParent;
		}
	}
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",291)
	return inParent;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetParent,return )

::nme::geom::Matrix DisplayObject_obj::nmeGetMatrix( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetMatrix")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",297)
	::nme::geom::Matrix mtx = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",298)
	::nme::display::DisplayObject_obj::nme_display_object_get_matrix(this->nmeHandle,mtx,false);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",299)
	return mtx;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetMatrix,return )

::nme::geom::Matrix DisplayObject_obj::nmeGetConcatenatedMatrix( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetConcatenatedMatrix")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",303)
	::nme::geom::Matrix mtx = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",304)
	::nme::display::DisplayObject_obj::nme_display_object_get_matrix(this->nmeHandle,mtx,true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",305)
	return mtx;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetConcatenatedMatrix,return )

Void DisplayObject_obj::nmeSetMatrix( ::nme::geom::Matrix inMatrix){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeSetMatrix")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",309)
		::nme::display::DisplayObject_obj::nme_display_object_set_matrix(this->nmeHandle,inMatrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetMatrix,(void))

::nme::geom::ColorTransform DisplayObject_obj::nmeGetColorTransform( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetColorTransform")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",314)
	::nme::geom::ColorTransform trans = ::nme::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",315)
	::nme::display::DisplayObject_obj::nme_display_object_get_color_transform(this->nmeHandle,trans,false);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",316)
	return trans;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetColorTransform,return )

::nme::geom::ColorTransform DisplayObject_obj::nmeGetConcatenatedColorTransform( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetConcatenatedColorTransform")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",320)
	::nme::geom::ColorTransform trans = ::nme::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",321)
	::nme::display::DisplayObject_obj::nme_display_object_get_color_transform(this->nmeHandle,trans,true);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",322)
	return trans;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetConcatenatedColorTransform,return )

Void DisplayObject_obj::nmeSetColorTransform( ::nme::geom::ColorTransform inTrans){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeSetColorTransform")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",327)
		::nme::display::DisplayObject_obj::nme_display_object_set_color_transform(this->nmeHandle,inTrans);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetColorTransform,(void))

::nme::geom::Rectangle DisplayObject_obj::nmeGetPixelBounds( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetPixelBounds")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",332)
	::nme::geom::Rectangle rect = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",333)
	::nme::display::DisplayObject_obj::nme_display_object_get_pixel_bounds(this->nmeHandle,rect);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",334)
	return rect;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetPixelBounds,return )

::nme::geom::Transform DisplayObject_obj::nmeGetTransform( ){
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetTransform")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",338)
	return ::nme::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetTransform,return )

::nme::geom::Transform DisplayObject_obj::nmeSetTransform( ::nme::geom::Transform inTransform){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetTransform")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",342)
	this->nmeSetMatrix(inTransform->nmeGetMatrix());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",343)
	this->nmeSetColorTransform(inTransform->nmeGetColorTransform());
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",344)
	return inTransform;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetTransform,return )

double DisplayObject_obj::nmeGetAlpha( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeGetAlpha")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",348)
	return ::nme::display::DisplayObject_obj::nme_display_object_get_alpha(this->nmeHandle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetAlpha,return )

double DisplayObject_obj::nmeSetAlpha( double inAlpha){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::nmeSetAlpha")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",352)
	::nme::display::DisplayObject_obj::nme_display_object_set_alpha(this->nmeHandle,inAlpha);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",353)
	return inAlpha;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetAlpha,return )

::nme::geom::Point DisplayObject_obj::globalToLocal( ::nme::geom::Point inLocal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::globalToLocal")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",358)
	::nme::geom::Point result = inLocal->clone();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",359)
	::nme::display::DisplayObject_obj::nme_display_object_global_to_local(this->nmeHandle,result);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",360)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

::nme::geom::Point DisplayObject_obj::localToGlobal( ::nme::geom::Point inGlobal){
	__SAFE_POINT
	HX_SOURCE_PUSH("DisplayObject_obj::localToGlobal")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",365)
	::nme::geom::Point result = inGlobal->clone();
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",366)
	::nme::display::DisplayObject_obj::nme_display_object_local_to_global(this->nmeHandle,result);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",367)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::hitTestPoint( double x,double y,Dynamic __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_SOURCE_PUSH("DisplayObject_obj::hitTestPoint");
{
		__SAFE_POINT
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",374)
		return ::nme::display::DisplayObject_obj::nme_display_object_hit_test_point(this->nmeHandle,x,y,shapeFlag,true);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

Void DisplayObject_obj::nmeGetObjectsUnderPoint( ::nme::geom::Point point,Array< ::nme::display::DisplayObject > result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeGetObjectsUnderPoint")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",380)
		if ((::nme::display::DisplayObject_obj::nme_display_object_hit_test_point(this->nmeHandle,point->x,point->y,true,false)))
			result->push(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeGetObjectsUnderPoint,(void))

::nme::display::InteractiveObject DisplayObject_obj::nmeAsInteractiveObject( ){
	HX_SOURCE_PUSH("DisplayObject_obj::nmeAsInteractiveObject")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",387)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeAsInteractiveObject,return )

Void DisplayObject_obj::nmeGetInteractiveObjectStack( Array< ::nme::display::InteractiveObject > outStack){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeGetInteractiveObjectStack")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",391)
		::nme::display::InteractiveObject io = this->nmeAsInteractiveObject();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",392)
		if (((io != null())))
			outStack->push(io);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",394)
		if (((this->nmeParent != null())))
			this->nmeParent->nmeGetInteractiveObjectStack(outStack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeGetInteractiveObjectStack,(void))

Void DisplayObject_obj::nmeBroadcast( ::nme::events::Event inEvt){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeBroadcast")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",400)
		this->dispatchEvent(inEvt);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeBroadcast,(void))

Void DisplayObject_obj::nmeFireEvent( ::nme::events::Event inEvt){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeFireEvent")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",405)
		Array< ::nme::display::InteractiveObject > stack = Array_obj< ::nme::display::InteractiveObject >::__new();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",406)
		if (((this->nmeParent != null())))
			this->nmeParent->nmeGetInteractiveObjectStack(stack);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",408)
		int l = stack->length;
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",410)
		if (((l > (int)0))){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",413)
			inEvt->nmeSetPhase(::nme::events::EventPhase_obj::CAPTURING_PHASE);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",414)
			stack->reverse();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",415)
			{
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",415)
				int _g = (int)0;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",415)
				while((_g < stack->length)){
					__SAFE_POINT
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",415)
					::nme::display::InteractiveObject obj = stack->__get(_g);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",415)
					++(_g);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",417)
					inEvt->currentTarget = obj;
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",418)
					obj->dispatchEvent(inEvt);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",419)
					if ((inEvt->nmeGetIsCancelled()))
						return null();
				}
			}
		}
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",425)
		inEvt->nmeSetPhase(::nme::events::EventPhase_obj::AT_TARGET);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",426)
		inEvt->currentTarget = hx::ObjectPtr<OBJ_>(this);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",427)
		this->dispatchEvent(inEvt);
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",428)
		if ((inEvt->nmeGetIsCancelled()))
			return null();
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",432)
		if ((inEvt->bubbles)){
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",434)
			inEvt->nmeSetPhase(::nme::events::EventPhase_obj::BUBBLING_PHASE);
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",435)
			stack->reverse();
			HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",436)
			{
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",436)
				int _g = (int)0;
				HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",436)
				while((_g < stack->length)){
					__SAFE_POINT
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",436)
					::nme::display::InteractiveObject obj = stack->__get(_g);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",436)
					++(_g);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",438)
					inEvt->currentTarget = obj;
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",439)
					obj->dispatchEvent(inEvt);
					HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",440)
					if ((inEvt->nmeGetIsCancelled()))
						return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeFireEvent,(void))

Void DisplayObject_obj::nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("DisplayObject_obj::nmeDrawToSurface")
		HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/display/DisplayObject.hx",454)
		::nme::display::DisplayObject_obj::nme_display_object_draw_to_surface(this->nmeHandle,inSurface,matrix,colorTransform,blendMode,clipRect);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,nmeDrawToSurface,(void))

Dynamic DisplayObject_obj::nme_create_display_object;

Dynamic DisplayObject_obj::nme_display_object_get_grapics;

Dynamic DisplayObject_obj::nme_display_object_draw_to_surface;

Dynamic DisplayObject_obj::nme_display_object_get_id;

Dynamic DisplayObject_obj::nme_display_object_get_x;

Dynamic DisplayObject_obj::nme_display_object_set_x;

Dynamic DisplayObject_obj::nme_display_object_get_y;

Dynamic DisplayObject_obj::nme_display_object_set_y;

Dynamic DisplayObject_obj::nme_display_object_get_scale_x;

Dynamic DisplayObject_obj::nme_display_object_set_scale_x;

Dynamic DisplayObject_obj::nme_display_object_get_scale_y;

Dynamic DisplayObject_obj::nme_display_object_set_scale_y;

Dynamic DisplayObject_obj::nme_display_object_get_mouse_x;

Dynamic DisplayObject_obj::nme_display_object_get_mouse_y;

Dynamic DisplayObject_obj::nme_display_object_get_rotation;

Dynamic DisplayObject_obj::nme_display_object_set_rotation;

Dynamic DisplayObject_obj::nme_display_object_get_bg;

Dynamic DisplayObject_obj::nme_display_object_set_bg;

Dynamic DisplayObject_obj::nme_display_object_get_name;

Dynamic DisplayObject_obj::nme_display_object_set_name;

Dynamic DisplayObject_obj::nme_display_object_get_width;

Dynamic DisplayObject_obj::nme_display_object_set_width;

Dynamic DisplayObject_obj::nme_display_object_get_height;

Dynamic DisplayObject_obj::nme_display_object_set_height;

Dynamic DisplayObject_obj::nme_display_object_get_alpha;

Dynamic DisplayObject_obj::nme_display_object_set_alpha;

Dynamic DisplayObject_obj::nme_display_object_get_blend_mode;

Dynamic DisplayObject_obj::nme_display_object_set_blend_mode;

Dynamic DisplayObject_obj::nme_display_object_get_cache_as_bitmap;

Dynamic DisplayObject_obj::nme_display_object_set_cache_as_bitmap;

Dynamic DisplayObject_obj::nme_display_object_get_visible;

Dynamic DisplayObject_obj::nme_display_object_set_visible;

Dynamic DisplayObject_obj::nme_display_object_set_filters;

Dynamic DisplayObject_obj::nme_display_object_global_to_local;

Dynamic DisplayObject_obj::nme_display_object_local_to_global;

Dynamic DisplayObject_obj::nme_display_object_set_scale9_grid;

Dynamic DisplayObject_obj::nme_display_object_set_scroll_rect;

Dynamic DisplayObject_obj::nme_display_object_set_mask;

Dynamic DisplayObject_obj::nme_display_object_set_matrix;

Dynamic DisplayObject_obj::nme_display_object_get_matrix;

Dynamic DisplayObject_obj::nme_display_object_get_color_transform;

Dynamic DisplayObject_obj::nme_display_object_set_color_transform;

Dynamic DisplayObject_obj::nme_display_object_get_pixel_bounds;

Dynamic DisplayObject_obj::nme_display_object_hit_test_point;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(cacheAsBitmap,"cacheAsBitmap");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(filters,"filters");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeGraphicsCache,"nmeGraphicsCache");
	HX_MARK_MEMBER_NAME(nmeParent,"nmeParent");
	HX_MARK_MEMBER_NAME(nmeFilters,"nmeFilters");
	HX_MARK_MEMBER_NAME(nmeID,"nmeID");
	HX_MARK_MEMBER_NAME(nmeScale9Grid,"nmeScale9Grid");
	HX_MARK_MEMBER_NAME(nmeScrollRect,"nmeScrollRect");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic DisplayObject_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return nmeGetX(); }
		if (HX_FIELD_EQ(inName,"y") ) { return nmeGetY(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return nmeGetName(); }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return nmeGetStage(); }
		if (HX_FIELD_EQ(inName,"width") ) { return nmeGetWidth(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return nmeGetAlpha(); }
		if (HX_FIELD_EQ(inName,"nmeID") ) { return nmeID; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return nmeGetScaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return nmeGetScaleY(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return nmeGetMouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return nmeGetMouseY(); }
		if (HX_FIELD_EQ(inName,"height") ) { return nmeGetHeight(); }
		if (HX_FIELD_EQ(inName,"parent") ) { return nmeGetParent(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return nmeGetVisible(); }
		if (HX_FIELD_EQ(inName,"filters") ) { return nmeGetFilters(); }
		if (HX_FIELD_EQ(inName,"nmeGetX") ) { return nmeGetX_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetX") ) { return nmeSetX_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetY") ) { return nmeGetY_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetY") ) { return nmeSetY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return nmeGetGraphics(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return nmeGetRotation(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetBG") ) { return nmeSetBG_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetBG") ) { return nmeGetBG_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return nmeGetTransform(); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return nmeGetBlendMode(); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"nmeParent") ) { return nmeParent; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return nmeGetScale9Grid(); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return nmeGetScrollRect(); }
		if (HX_FIELD_EQ(inName,"nmeFilters") ) { return nmeFilters; }
		if (HX_FIELD_EQ(inName,"nmeGetName") ) { return nmeGetName_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetName") ) { return nmeSetName_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetMask") ) { return nmeSetMask_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnAdded") ) { return nmeOnAdded_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeGetStage") ) { return nmeGetStage_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFindByID") ) { return nmeFindByID_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetWidth") ) { return nmeGetWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetWidth") ) { return nmeSetWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetAlpha") ) { return nmeGetAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetAlpha") ) { return nmeSetAlpha_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeGetParent") ) { return nmeGetParent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetScaleX") ) { return nmeGetScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetScaleX") ) { return nmeSetScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetScaleY") ) { return nmeGetScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetScaleY") ) { return nmeSetScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetMouseX") ) { return nmeGetMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetMouseY") ) { return nmeGetMouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetHeight") ) { return nmeGetHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetHeight") ) { return nmeSetHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnRemoved") ) { return nmeOnRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetParent") ) { return nmeSetParent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetMatrix") ) { return nmeGetMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetMatrix") ) { return nmeSetMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeBroadcast") ) { return nmeBroadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFireEvent") ) { return nmeFireEvent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return nmeGetCacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"nmeScale9Grid") ) { return nmeScale9Grid; }
		if (HX_FIELD_EQ(inName,"nmeScrollRect") ) { return nmeScrollRect; }
		if (HX_FIELD_EQ(inName,"nmeGetVisible") ) { return nmeGetVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetVisible") ) { return nmeSetVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetFilters") ) { return nmeSetFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetFilters") ) { return nmeGetFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeGetGraphics") ) { return nmeGetGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetRotation") ) { return nmeGetRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetRotation") ) { return nmeSetRotation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeGetBlendMode") ) { return nmeGetBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetBlendMode") ) { return nmeSetBlendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetTransform") ) { return nmeGetTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetTransform") ) { return nmeSetTransform_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return nmeGetBG(); }
		if (HX_FIELD_EQ(inName,"nmeGraphicsCache") ) { return nmeGraphicsCache; }
		if (HX_FIELD_EQ(inName,"nmeGetScale9Grid") ) { return nmeGetScale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetScale9Grid") ) { return nmeSetScale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetScrollRect") ) { return nmeGetScrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetScrollRect") ) { return nmeSetScrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeDrawToSurface") ) { return nmeDrawToSurface_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeGetPixelBounds") ) { return nmeGetPixelBounds_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nmeGetCacheAsBitmap") ) { return nmeGetCacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetCacheAsBitmap") ) { return nmeSetCacheAsBitmap_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeGetColorTransform") ) { return nmeGetColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetColorTransform") ) { return nmeSetColorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nmeAsInteractiveObject") ) { return nmeAsInteractiveObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nmeGetObjectsUnderPoint") ) { return nmeGetObjectsUnderPoint_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_x") ) { return nme_display_object_get_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_x") ) { return nme_display_object_set_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_y") ) { return nme_display_object_get_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_y") ) { return nme_display_object_set_y; }
		if (HX_FIELD_EQ(inName,"nmeGetConcatenatedMatrix") ) { return nmeGetConcatenatedMatrix_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_create_display_object") ) { return nme_create_display_object; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_id") ) { return nme_display_object_get_id; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bg") ) { return nme_display_object_get_bg; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { return nme_display_object_set_bg; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_name") ) { return nme_display_object_get_name; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_name") ) { return nme_display_object_set_name; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mask") ) { return nme_display_object_set_mask; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_width") ) { return nme_display_object_get_width; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_width") ) { return nme_display_object_set_width; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_alpha") ) { return nme_display_object_get_alpha; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_alpha") ) { return nme_display_object_set_alpha; }
		if (HX_FIELD_EQ(inName,"nmeGetInteractiveObjectStack") ) { return nmeGetInteractiveObjectStack_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_height") ) { return nme_display_object_get_height; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_height") ) { return nme_display_object_set_height; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_matrix") ) { return nme_display_object_set_matrix; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_matrix") ) { return nme_display_object_get_matrix; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_grapics") ) { return nme_display_object_get_grapics; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_x") ) { return nme_display_object_get_scale_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_x") ) { return nme_display_object_set_scale_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_y") ) { return nme_display_object_get_scale_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_y") ) { return nme_display_object_set_scale_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_x") ) { return nme_display_object_get_mouse_x; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_y") ) { return nme_display_object_get_mouse_y; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_visible") ) { return nme_display_object_get_visible; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_visible") ) { return nme_display_object_set_visible; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_filters") ) { return nme_display_object_set_filters; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_rotation") ) { return nme_display_object_get_rotation; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_rotation") ) { return nme_display_object_set_rotation; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nmeGetConcatenatedColorTransform") ) { return nmeGetConcatenatedColorTransform_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_blend_mode") ) { return nme_display_object_get_blend_mode; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_blend_mode") ) { return nme_display_object_set_blend_mode; }
		if (HX_FIELD_EQ(inName,"nme_display_object_hit_test_point") ) { return nme_display_object_hit_test_point; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_display_object_draw_to_surface") ) { return nme_display_object_draw_to_surface; }
		if (HX_FIELD_EQ(inName,"nme_display_object_global_to_local") ) { return nme_display_object_global_to_local; }
		if (HX_FIELD_EQ(inName,"nme_display_object_local_to_global") ) { return nme_display_object_local_to_global; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale9_grid") ) { return nme_display_object_set_scale9_grid; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scroll_rect") ) { return nme_display_object_set_scroll_rect; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_bounds") ) { return nme_display_object_get_pixel_bounds; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_cache_as_bitmap") ) { return nme_display_object_get_cache_as_bitmap; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_cache_as_bitmap") ) { return nme_display_object_set_cache_as_bitmap; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_color_transform") ) { return nme_display_object_get_color_transform; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_color_transform") ) { return nme_display_object_set_color_transform; }
	}
	return super::__Field(inName);
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return nmeSetX(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return nmeSetY(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return nmeSetName(inValue); }
		if (HX_FIELD_EQ(inName,"mask") ) { return nmeSetMask(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::nme::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return nmeSetWidth(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return nmeSetAlpha(inValue); }
		if (HX_FIELD_EQ(inName,"nmeID") ) { nmeID=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return nmeSetScaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return nmeSetScaleY(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return nmeSetHeight(inValue); }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::nme::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return nmeSetVisible(inValue); }
		if (HX_FIELD_EQ(inName,"filters") ) { return nmeSetFilters(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::nme::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return nmeSetRotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return nmeSetTransform(inValue); }
		if (HX_FIELD_EQ(inName,"blendMode") ) { return nmeSetBlendMode(inValue); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeParent") ) { nmeParent=inValue.Cast< ::nme::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return nmeSetScale9Grid(inValue); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return nmeSetScrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"nmeFilters") ) { nmeFilters=inValue.Cast< Array< ::nme::filters::BitmapFilter > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { return nmeSetCacheAsBitmap(inValue); }
		if (HX_FIELD_EQ(inName,"nmeScale9Grid") ) { nmeScale9Grid=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeScrollRect") ) { nmeScrollRect=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return nmeSetBG(inValue); }
		if (HX_FIELD_EQ(inName,"nmeGraphicsCache") ) { nmeGraphicsCache=inValue.Cast< ::nme::display::Graphics >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_x") ) { nme_display_object_get_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_x") ) { nme_display_object_set_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_y") ) { nme_display_object_get_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_y") ) { nme_display_object_set_y=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_create_display_object") ) { nme_create_display_object=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_id") ) { nme_display_object_get_id=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bg") ) { nme_display_object_get_bg=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { nme_display_object_set_bg=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_name") ) { nme_display_object_get_name=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_name") ) { nme_display_object_set_name=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mask") ) { nme_display_object_set_mask=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_width") ) { nme_display_object_get_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_width") ) { nme_display_object_set_width=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_alpha") ) { nme_display_object_get_alpha=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_alpha") ) { nme_display_object_set_alpha=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_height") ) { nme_display_object_get_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_height") ) { nme_display_object_set_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_matrix") ) { nme_display_object_set_matrix=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_matrix") ) { nme_display_object_get_matrix=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_grapics") ) { nme_display_object_get_grapics=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_x") ) { nme_display_object_get_scale_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_x") ) { nme_display_object_set_scale_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_y") ) { nme_display_object_get_scale_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_y") ) { nme_display_object_set_scale_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_x") ) { nme_display_object_get_mouse_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_y") ) { nme_display_object_get_mouse_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_visible") ) { nme_display_object_get_visible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_visible") ) { nme_display_object_set_visible=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_filters") ) { nme_display_object_set_filters=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_rotation") ) { nme_display_object_get_rotation=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_rotation") ) { nme_display_object_set_rotation=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_blend_mode") ) { nme_display_object_get_blend_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_blend_mode") ) { nme_display_object_set_blend_mode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_hit_test_point") ) { nme_display_object_hit_test_point=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_display_object_draw_to_surface") ) { nme_display_object_draw_to_surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_global_to_local") ) { nme_display_object_global_to_local=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_local_to_global") ) { nme_display_object_local_to_global=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale9_grid") ) { nme_display_object_set_scale9_grid=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scroll_rect") ) { nme_display_object_set_scroll_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_bounds") ) { nme_display_object_get_pixel_bounds=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_cache_as_bitmap") ) { nme_display_object_get_cache_as_bitmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_cache_as_bitmap") ) { nme_display_object_set_cache_as_bitmap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_color_transform") ) { nme_display_object_get_color_transform=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_color_transform") ) { nme_display_object_set_color_transform=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("graphics"));
	outFields->push(HX_CSTRING("stage"));
	outFields->push(HX_CSTRING("opaqueBackground"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("cacheAsBitmap"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("filters"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("scale9Grid"));
	outFields->push(HX_CSTRING("scrollRect"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("transform"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("blendMode"));
	outFields->push(HX_CSTRING("nmeHandle"));
	outFields->push(HX_CSTRING("nmeGraphicsCache"));
	outFields->push(HX_CSTRING("nmeParent"));
	outFields->push(HX_CSTRING("nmeFilters"));
	outFields->push(HX_CSTRING("nmeID"));
	outFields->push(HX_CSTRING("nmeScale9Grid"));
	outFields->push(HX_CSTRING("nmeScrollRect"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_create_display_object"),
	HX_CSTRING("nme_display_object_get_grapics"),
	HX_CSTRING("nme_display_object_draw_to_surface"),
	HX_CSTRING("nme_display_object_get_id"),
	HX_CSTRING("nme_display_object_get_x"),
	HX_CSTRING("nme_display_object_set_x"),
	HX_CSTRING("nme_display_object_get_y"),
	HX_CSTRING("nme_display_object_set_y"),
	HX_CSTRING("nme_display_object_get_scale_x"),
	HX_CSTRING("nme_display_object_set_scale_x"),
	HX_CSTRING("nme_display_object_get_scale_y"),
	HX_CSTRING("nme_display_object_set_scale_y"),
	HX_CSTRING("nme_display_object_get_mouse_x"),
	HX_CSTRING("nme_display_object_get_mouse_y"),
	HX_CSTRING("nme_display_object_get_rotation"),
	HX_CSTRING("nme_display_object_set_rotation"),
	HX_CSTRING("nme_display_object_get_bg"),
	HX_CSTRING("nme_display_object_set_bg"),
	HX_CSTRING("nme_display_object_get_name"),
	HX_CSTRING("nme_display_object_set_name"),
	HX_CSTRING("nme_display_object_get_width"),
	HX_CSTRING("nme_display_object_set_width"),
	HX_CSTRING("nme_display_object_get_height"),
	HX_CSTRING("nme_display_object_set_height"),
	HX_CSTRING("nme_display_object_get_alpha"),
	HX_CSTRING("nme_display_object_set_alpha"),
	HX_CSTRING("nme_display_object_get_blend_mode"),
	HX_CSTRING("nme_display_object_set_blend_mode"),
	HX_CSTRING("nme_display_object_get_cache_as_bitmap"),
	HX_CSTRING("nme_display_object_set_cache_as_bitmap"),
	HX_CSTRING("nme_display_object_get_visible"),
	HX_CSTRING("nme_display_object_set_visible"),
	HX_CSTRING("nme_display_object_set_filters"),
	HX_CSTRING("nme_display_object_global_to_local"),
	HX_CSTRING("nme_display_object_local_to_global"),
	HX_CSTRING("nme_display_object_set_scale9_grid"),
	HX_CSTRING("nme_display_object_set_scroll_rect"),
	HX_CSTRING("nme_display_object_set_mask"),
	HX_CSTRING("nme_display_object_set_matrix"),
	HX_CSTRING("nme_display_object_get_matrix"),
	HX_CSTRING("nme_display_object_get_color_transform"),
	HX_CSTRING("nme_display_object_set_color_transform"),
	HX_CSTRING("nme_display_object_get_pixel_bounds"),
	HX_CSTRING("nme_display_object_hit_test_point"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("graphics"),
	HX_CSTRING("stage"),
	HX_CSTRING("opaqueBackground"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("rotation"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("cacheAsBitmap"),
	HX_CSTRING("visible"),
	HX_CSTRING("filters"),
	HX_CSTRING("parent"),
	HX_CSTRING("scale9Grid"),
	HX_CSTRING("scrollRect"),
	HX_CSTRING("name"),
	HX_CSTRING("mask"),
	HX_CSTRING("transform"),
	HX_CSTRING("alpha"),
	HX_CSTRING("blendMode"),
	HX_CSTRING("nmeHandle"),
	HX_CSTRING("nmeGraphicsCache"),
	HX_CSTRING("nmeParent"),
	HX_CSTRING("nmeFilters"),
	HX_CSTRING("nmeID"),
	HX_CSTRING("nmeScale9Grid"),
	HX_CSTRING("nmeScrollRect"),
	HX_CSTRING("toString"),
	HX_CSTRING("nmeGetGraphics"),
	HX_CSTRING("nmeGetParent"),
	HX_CSTRING("nmeGetStage"),
	HX_CSTRING("nmeFindByID"),
	HX_CSTRING("nmeGetX"),
	HX_CSTRING("nmeSetX"),
	HX_CSTRING("nmeGetY"),
	HX_CSTRING("nmeSetY"),
	HX_CSTRING("nmeGetScaleX"),
	HX_CSTRING("nmeSetScaleX"),
	HX_CSTRING("nmeGetScaleY"),
	HX_CSTRING("nmeSetScaleY"),
	HX_CSTRING("nmeGetMouseX"),
	HX_CSTRING("nmeGetMouseY"),
	HX_CSTRING("nmeGetRotation"),
	HX_CSTRING("nmeSetRotation"),
	HX_CSTRING("nmeGetCacheAsBitmap"),
	HX_CSTRING("nmeSetCacheAsBitmap"),
	HX_CSTRING("nmeGetVisible"),
	HX_CSTRING("nmeSetVisible"),
	HX_CSTRING("nmeGetWidth"),
	HX_CSTRING("nmeSetWidth"),
	HX_CSTRING("nmeGetHeight"),
	HX_CSTRING("nmeSetHeight"),
	HX_CSTRING("nmeGetName"),
	HX_CSTRING("nmeSetName"),
	HX_CSTRING("nmeGetBlendMode"),
	HX_CSTRING("nmeSetBlendMode"),
	HX_CSTRING("nmeGetScale9Grid"),
	HX_CSTRING("nmeSetScale9Grid"),
	HX_CSTRING("nmeGetScrollRect"),
	HX_CSTRING("nmeSetScrollRect"),
	HX_CSTRING("nmeSetMask"),
	HX_CSTRING("nmeSetBG"),
	HX_CSTRING("nmeGetBG"),
	HX_CSTRING("nmeSetFilters"),
	HX_CSTRING("nmeGetFilters"),
	HX_CSTRING("nmeOnAdded"),
	HX_CSTRING("nmeOnRemoved"),
	HX_CSTRING("nmeSetParent"),
	HX_CSTRING("nmeGetMatrix"),
	HX_CSTRING("nmeGetConcatenatedMatrix"),
	HX_CSTRING("nmeSetMatrix"),
	HX_CSTRING("nmeGetColorTransform"),
	HX_CSTRING("nmeGetConcatenatedColorTransform"),
	HX_CSTRING("nmeSetColorTransform"),
	HX_CSTRING("nmeGetPixelBounds"),
	HX_CSTRING("nmeGetTransform"),
	HX_CSTRING("nmeSetTransform"),
	HX_CSTRING("nmeGetAlpha"),
	HX_CSTRING("nmeSetAlpha"),
	HX_CSTRING("globalToLocal"),
	HX_CSTRING("localToGlobal"),
	HX_CSTRING("hitTestPoint"),
	HX_CSTRING("nmeGetObjectsUnderPoint"),
	HX_CSTRING("nmeAsInteractiveObject"),
	HX_CSTRING("nmeGetInteractiveObjectStack"),
	HX_CSTRING("nmeBroadcast"),
	HX_CSTRING("nmeFireEvent"),
	HX_CSTRING("nmeDrawToSurface"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_create_display_object,"nme_create_display_object");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_grapics,"nme_display_object_get_grapics");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_draw_to_surface,"nme_display_object_draw_to_surface");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_id,"nme_display_object_get_id");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_x,"nme_display_object_get_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_x,"nme_display_object_set_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_y,"nme_display_object_get_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_y,"nme_display_object_set_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_x,"nme_display_object_get_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_x,"nme_display_object_set_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_y,"nme_display_object_get_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_y,"nme_display_object_set_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_x,"nme_display_object_get_mouse_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_y,"nme_display_object_get_mouse_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_rotation,"nme_display_object_get_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_rotation,"nme_display_object_set_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bg,"nme_display_object_get_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_name,"nme_display_object_get_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_name,"nme_display_object_set_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_width,"nme_display_object_get_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_width,"nme_display_object_set_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_height,"nme_display_object_get_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_height,"nme_display_object_set_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_alpha,"nme_display_object_get_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_alpha,"nme_display_object_set_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_blend_mode,"nme_display_object_get_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_blend_mode,"nme_display_object_set_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_cache_as_bitmap,"nme_display_object_get_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_cache_as_bitmap,"nme_display_object_set_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_visible,"nme_display_object_get_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_visible,"nme_display_object_set_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_filters,"nme_display_object_set_filters");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_global_to_local,"nme_display_object_global_to_local");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_local_to_global,"nme_display_object_local_to_global");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale9_grid,"nme_display_object_set_scale9_grid");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scroll_rect,"nme_display_object_set_scroll_rect");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_mask,"nme_display_object_set_mask");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_matrix,"nme_display_object_set_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_matrix,"nme_display_object_get_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_color_transform,"nme_display_object_get_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_color_transform,"nme_display_object_set_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_bounds,"nme_display_object_get_pixel_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_hit_test_point,"nme_display_object_hit_test_point");
};

Class DisplayObject_obj::__mClass;

void DisplayObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.display.DisplayObject"), hx::TCanCast< DisplayObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void DisplayObject_obj::__boot()
{
	hx::Static(nme_create_display_object) = ::nme::Loader_obj::load(HX_CSTRING("nme_create_display_object"),(int)0);
	hx::Static(nme_display_object_get_grapics) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_graphics"),(int)1);
	hx::Static(nme_display_object_draw_to_surface) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_draw_to_surface"),(int)-1);
	hx::Static(nme_display_object_get_id) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_id"),(int)1);
	hx::Static(nme_display_object_get_x) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_x"),(int)1);
	hx::Static(nme_display_object_set_x) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_x"),(int)2);
	hx::Static(nme_display_object_get_y) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_y"),(int)1);
	hx::Static(nme_display_object_set_y) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_y"),(int)2);
	hx::Static(nme_display_object_get_scale_x) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_scale_x"),(int)1);
	hx::Static(nme_display_object_set_scale_x) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_scale_x"),(int)2);
	hx::Static(nme_display_object_get_scale_y) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_scale_y"),(int)1);
	hx::Static(nme_display_object_set_scale_y) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_scale_y"),(int)2);
	hx::Static(nme_display_object_get_mouse_x) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_mouse_x"),(int)1);
	hx::Static(nme_display_object_get_mouse_y) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_mouse_y"),(int)1);
	hx::Static(nme_display_object_get_rotation) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_rotation"),(int)1);
	hx::Static(nme_display_object_set_rotation) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_rotation"),(int)2);
	hx::Static(nme_display_object_get_bg) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_bg"),(int)1);
	hx::Static(nme_display_object_set_bg) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_bg"),(int)2);
	hx::Static(nme_display_object_get_name) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_name"),(int)1);
	hx::Static(nme_display_object_set_name) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_name"),(int)2);
	hx::Static(nme_display_object_get_width) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_width"),(int)1);
	hx::Static(nme_display_object_set_width) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_width"),(int)2);
	hx::Static(nme_display_object_get_height) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_height"),(int)1);
	hx::Static(nme_display_object_set_height) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_height"),(int)2);
	hx::Static(nme_display_object_get_alpha) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_alpha"),(int)1);
	hx::Static(nme_display_object_set_alpha) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_alpha"),(int)2);
	hx::Static(nme_display_object_get_blend_mode) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_blend_mode"),(int)1);
	hx::Static(nme_display_object_set_blend_mode) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_blend_mode"),(int)2);
	hx::Static(nme_display_object_get_cache_as_bitmap) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_cache_as_bitmap"),(int)1);
	hx::Static(nme_display_object_set_cache_as_bitmap) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_cache_as_bitmap"),(int)2);
	hx::Static(nme_display_object_get_visible) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_visible"),(int)1);
	hx::Static(nme_display_object_set_visible) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_visible"),(int)2);
	hx::Static(nme_display_object_set_filters) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_filters"),(int)2);
	hx::Static(nme_display_object_global_to_local) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_global_to_local"),(int)2);
	hx::Static(nme_display_object_local_to_global) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_local_to_global"),(int)2);
	hx::Static(nme_display_object_set_scale9_grid) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_scale9_grid"),(int)2);
	hx::Static(nme_display_object_set_scroll_rect) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_scroll_rect"),(int)2);
	hx::Static(nme_display_object_set_mask) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_mask"),(int)2);
	hx::Static(nme_display_object_set_matrix) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_matrix"),(int)2);
	hx::Static(nme_display_object_get_matrix) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_matrix"),(int)3);
	hx::Static(nme_display_object_get_color_transform) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_color_transform"),(int)3);
	hx::Static(nme_display_object_set_color_transform) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_set_color_transform"),(int)2);
	hx::Static(nme_display_object_get_pixel_bounds) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_get_pixel_bounds"),(int)2);
	hx::Static(nme_display_object_hit_test_point) = ::nme::Loader_obj::load(HX_CSTRING("nme_display_object_hit_test_point"),(int)5);
}

} // end namespace nme
} // end namespace display

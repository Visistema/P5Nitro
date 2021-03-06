#include <hxcpp.h>

#ifndef INCLUDED_nme_events_ErrorEvent
#include <nme/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_TextEvent
#include <nme/events/TextEvent.h>
#endif
namespace nme{
namespace events{

Void ErrorEvent_obj::__construct(::String type,Dynamic __o_bubbles,Dynamic __o_cancelable,Dynamic __o_text,int inID)
{
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_CSTRING(""));
{
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/events/ErrorEvent.hx",10)
	super::__construct(type,bubbles,cancelable,text);
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/events/ErrorEvent.hx",11)
	this->errorID = inID;
}
;
	return null();
}

ErrorEvent_obj::~ErrorEvent_obj() { }

Dynamic ErrorEvent_obj::__CreateEmpty() { return  new ErrorEvent_obj; }
hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__new(::String type,Dynamic __o_bubbles,Dynamic __o_cancelable,Dynamic __o_text,int inID)
{  hx::ObjectPtr< ErrorEvent_obj > result = new ErrorEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,__o_text,inID);
	return result;}

Dynamic ErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ErrorEvent_obj > result = new ErrorEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String ErrorEvent_obj::toString( ){
	HX_SOURCE_PUSH("ErrorEvent_obj::toString")
	HX_SOURCE_POS("/usr/lib/haxe/lib/nme/trunk/nme/events/ErrorEvent.hx",14)
	return this->text;
}


HX_DEFINE_DYNAMIC_FUNC0(ErrorEvent_obj,toString,return )


ErrorEvent_obj::ErrorEvent_obj()
{
}

void ErrorEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorEvent);
	HX_MARK_MEMBER_NAME(errorID,"errorID");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ErrorEvent_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("errorID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("errorID"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ErrorEvent_obj::__mClass;

void ErrorEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.events.ErrorEvent"), hx::TCanCast< ErrorEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ErrorEvent_obj::__boot()
{
}

} // end namespace nme
} // end namespace events

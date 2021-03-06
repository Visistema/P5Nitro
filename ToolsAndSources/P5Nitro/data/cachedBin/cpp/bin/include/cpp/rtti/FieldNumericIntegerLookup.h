#ifndef INCLUDED_cpp_rtti_FieldNumericIntegerLookup
#define INCLUDED_cpp_rtti_FieldNumericIntegerLookup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,rtti,FieldNumericIntegerLookup)
namespace cpp{
namespace rtti{


class FieldNumericIntegerLookup_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef FieldNumericIntegerLookup_obj OBJ_;
};

#define DELEGATE_cpp_rtti_FieldNumericIntegerLookup \


template<typename IMPL>
class FieldNumericIntegerLookup_delegate_ : public FieldNumericIntegerLookup_obj
{
	protected:
		IMPL *mDelegate;
	public:
		FieldNumericIntegerLookup_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_cpp_rtti_FieldNumericIntegerLookup
};

} // end namespace cpp
} // end namespace rtti

#endif /* INCLUDED_cpp_rtti_FieldNumericIntegerLookup */ 

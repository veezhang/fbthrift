/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_constants.h"

#include <thrift/lib/cpp2/gen/module_constants_cpp.h>


namespace facebook { namespace ns { namespace qwerty {

::std::map<::std::string, ::facebook::ns::qwerty::AnEnumB> const& enums_constants::MapStringEnum() {
  static folly::Indestructible<::std::map<::std::string, ::facebook::ns::qwerty::AnEnumB>> const instance{std::initializer_list<::std::map<::std::string, ::facebook::ns::qwerty::AnEnumB>::value_type>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("0"),  ::facebook::ns::qwerty::AnEnumB::FIELDB}}};
  return *instance;
}

::std::map<::facebook::ns::qwerty::AnEnumC, ::std::string> const& enums_constants::MapEnumString() {
  static folly::Indestructible<::std::map<::facebook::ns::qwerty::AnEnumC, ::std::string>> const instance{std::initializer_list<::std::map<::facebook::ns::qwerty::AnEnumC, ::std::string>::value_type>{{ ::facebook::ns::qwerty::AnEnumC::FIELDC, apache::thrift::StringTraits<std::string>::fromStringLiteral("unknown")}}};
  return *instance;
}

::std::map<::facebook::ns::qwerty::AnEnumA, ::std::set<::facebook::ns::qwerty::AnEnumB>> const& enums_constants::ConstantMap1() {
  static folly::Indestructible<::std::map<::facebook::ns::qwerty::AnEnumA, ::std::set<::facebook::ns::qwerty::AnEnumB>>> const instance{std::initializer_list<::std::map<::facebook::ns::qwerty::AnEnumA, ::std::set<::facebook::ns::qwerty::AnEnumB>>::value_type>{{ ::facebook::ns::qwerty::AnEnumA::FIELDA, std::initializer_list<::facebook::ns::qwerty::AnEnumB>{ ::facebook::ns::qwerty::AnEnumB::FIELDA,
   ::facebook::ns::qwerty::AnEnumB::FIELDB}}}};
  return *instance;
}

::std::map<::facebook::ns::qwerty::AnEnumC, ::std::map<::std::int16_t, ::std::set<::std::int16_t>>> const& enums_constants::ConstantMap2() {
  static folly::Indestructible<::std::map<::facebook::ns::qwerty::AnEnumC, ::std::map<::std::int16_t, ::std::set<::std::int16_t>>>> const instance{std::initializer_list<::std::map<::facebook::ns::qwerty::AnEnumC, ::std::map<::std::int16_t, ::std::set<::std::int16_t>>>::value_type>{{ ::facebook::ns::qwerty::AnEnumC::FIELDC, std::initializer_list<::std::map<::std::int16_t, ::std::set<::std::int16_t>>::value_type>{{static_cast<::std::int16_t>(0), std::initializer_list<::std::int16_t>{static_cast<::std::int16_t>(0),
  static_cast<::std::int16_t>(2)}}}}}};
  return *instance;
}

}}} // facebook::ns::qwerty

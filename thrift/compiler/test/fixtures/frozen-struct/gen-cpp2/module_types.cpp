/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::some::ns::EnumB>::size;
folly::Range<::some::ns::EnumB const*> const TEnumTraits<::some::ns::EnumB>::values = folly::range(TEnumDataStorage<::some::ns::EnumB>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::some::ns::EnumB>::names = folly::range(TEnumDataStorage<::some::ns::EnumB>::names);

char const* TEnumTraits<::some::ns::EnumB>::findName(type value) {
  using factory = ::some::ns::_EnumB_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::some::ns::EnumB>::findValue(char const* name, type* out) {
  using factory = ::some::ns::_EnumB_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace some { namespace ns {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _EnumB_EnumMapFactory::ValuesToNamesMapType _EnumB_VALUES_TO_NAMES = _EnumB_EnumMapFactory::makeValuesToNamesMap();
const _EnumB_EnumMapFactory::NamesToValuesMapType _EnumB_NAMES_TO_VALUES = _EnumB_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

}} // some::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::ModuleA>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::some::ns::ModuleA>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ModuleA::ModuleA(const ModuleA&) = default;
ModuleA& ModuleA::operator=(const ModuleA&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ModuleA::ModuleA() :
      i32Field(0) {
}

THRIFT_IGNORE_ISSET_USE_WARNING_END

ModuleA::~ModuleA() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ModuleA::ModuleA(ModuleA&& other) noexcept  :
    i32Field(std::move(other.i32Field)),
    strField(std::move(other.strField)),
    listField(std::move(other.listField)),
    mapField(std::move(other.mapField)),
    inclAField(std::move(other.inclAField)),
    inclBField(std::move(other.inclBField)),
    __isset(other.__isset) {}
ModuleA& ModuleA::operator=(FOLLY_MAYBE_UNUSED ModuleA&& other) noexcept {
    this->i32Field = std::move(other.i32Field);
    this->strField = std::move(other.strField);
    this->listField = std::move(other.listField);
    this->mapField = std::move(other.mapField);
    this->inclAField = std::move(other.inclAField);
    this->inclBField = std::move(other.inclBField);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ModuleA::ModuleA(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::std::string strField__arg, ::std::vector<::std::int16_t> listField__arg, ::std::map<::std::string, ::std::int32_t> mapField__arg, ::some::ns::IncludedA inclAField__arg, ::some::ns::IncludedB inclBField__arg) :
    i32Field(std::move(i32Field__arg)),
    strField(std::move(strField__arg)),
    listField(std::move(listField__arg)),
    mapField(std::move(mapField__arg)),
    inclAField(std::move(inclAField__arg)),
    inclBField(std::move(inclBField__arg)) {
  __isset.i32Field = true;
  __isset.strField = true;
  __isset.listField = true;
  __isset.mapField = true;
  __isset.inclAField = true;
  __isset.inclBField = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void ModuleA::__clear() {
  // clear all fields
  this->i32Field = 0;
  this->strField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->listField.clear();
  this->mapField.clear();
  this->inclAField.__clear();
  this->inclBField.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  if (!(lhs.strField == rhs.strField)) {
    return false;
  }
  if (!(lhs.listField == rhs.listField)) {
    return false;
  }
  if (!(lhs.mapField == rhs.mapField)) {
    return false;
  }
  if (!(lhs.inclAField == rhs.inclAField)) {
    return false;
  }
  if (!(lhs.inclBField == rhs.inclBField)) {
    return false;
  }
  return true;
}

bool ModuleA::operator<(const ModuleA& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  if (!(lhs.strField == rhs.strField)) {
    return lhs.strField < rhs.strField;
  }
  if (!(lhs.listField == rhs.listField)) {
    return lhs.listField < rhs.listField;
  }
  if (!(lhs.mapField == rhs.mapField)) {
    return lhs.mapField < rhs.mapField;
  }
  if (!(lhs.inclAField == rhs.inclAField)) {
    return lhs.inclAField < rhs.inclAField;
  }
  if (!(lhs.inclBField == rhs.inclBField)) {
    return lhs.inclBField < rhs.inclBField;
  }
  return false;
}

const ::std::vector<::std::int16_t>& ModuleA::get_listField() const& {
  return listField;
}

::std::vector<::std::int16_t> ModuleA::get_listField() && {
  return std::move(listField);
}

const ::std::map<::std::string, ::std::int32_t>& ModuleA::get_mapField() const& {
  return mapField;
}

::std::map<::std::string, ::std::int32_t> ModuleA::get_mapField() && {
  return std::move(mapField);
}

const ::some::ns::IncludedA& ModuleA::get_inclAField() const& {
  return inclAField;
}

::some::ns::IncludedA ModuleA::get_inclAField() && {
  return std::move(inclAField);
}

const ::some::ns::IncludedB& ModuleA::get_inclBField() const& {
  return inclBField;
}

::some::ns::IncludedB ModuleA::get_inclBField() && {
  return std::move(inclBField);
}


void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field_ref().value(), b.i32Field_ref().value());
  swap(a.strField_ref().value(), b.strField_ref().value());
  swap(a.listField_ref().value(), b.listField_ref().value());
  swap(a.mapField_ref().value(), b.mapField_ref().value());
  swap(a.inclAField_ref().value(), b.inclAField_ref().value());
  swap(a.inclBField_ref().value(), b.inclBField_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void ModuleA::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleA::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedA>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedB>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedA>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        ModuleA,
        ::apache::thrift::type_class::structure,
        ::some::ns::IncludedB>,
    "inconsistent use of nimble option");

}} // some::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::ModuleB>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::some::ns::ModuleB>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace some { namespace ns {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
ModuleB::ModuleB(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::some::ns::EnumB inclEnumB__arg) :
    i32Field(std::move(i32Field__arg)),
    inclEnumB(std::move(inclEnumB__arg)) {
  __isset.i32Field = true;
  __isset.inclEnumB = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void ModuleB::__clear() {
  // clear all fields
  this->i32Field = 0;
  this->inclEnumB = static_cast< ::some::ns::EnumB>(0);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  if (!(lhs.inclEnumB == rhs.inclEnumB)) {
    return false;
  }
  return true;
}

bool ModuleB::operator<(const ModuleB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  if (!(lhs.inclEnumB == rhs.inclEnumB)) {
    return lhs.inclEnumB < rhs.inclEnumB;
  }
  return false;
}


void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field_ref().value(), b.i32Field_ref().value());
  swap(a.inclEnumB_ref().value(), b.inclEnumB_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void ModuleB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ModuleB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}} // some::ns

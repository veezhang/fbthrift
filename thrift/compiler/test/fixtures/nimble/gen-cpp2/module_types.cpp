/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::BasicTypes>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::BasicTypes>;
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

namespace cpp2 {


BasicTypes::BasicTypes(apache::thrift::FragileConstructor, ::std::int32_t first__arg, ::std::int32_t second__arg, ::std::int64_t third__arg, bool isTrue__arg) :
    __fbthrift_field_first(std::move(first__arg)),
    __fbthrift_field_second(std::move(second__arg)),
    __fbthrift_field_third(std::move(third__arg)),
    __fbthrift_field_isTrue(std::move(isTrue__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
}


void BasicTypes::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_first = ::std::int32_t();
  this->__fbthrift_field_second = ::std::int32_t();
  this->__fbthrift_field_third = ::std::int64_t();
  this->__fbthrift_field_isTrue = bool();
  __isset = {};
}

bool BasicTypes::__fbthrift_is_empty() const {
  return false;
}

bool BasicTypes::operator==(const BasicTypes& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first_ref() == rhs.first_ref())) {
    return false;
  }
  if (!(lhs.second_ref() == rhs.second_ref())) {
    return false;
  }
  if (!(lhs.third_ref() == rhs.third_ref())) {
    return false;
  }
  if (!(lhs.isTrue_ref() == rhs.isTrue_ref())) {
    return false;
  }
  return true;
}

bool BasicTypes::operator<(const BasicTypes& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first_ref() == rhs.first_ref())) {
    return lhs.first_ref() < rhs.first_ref();
  }
  if (!(lhs.second_ref() == rhs.second_ref())) {
    return lhs.second_ref() < rhs.second_ref();
  }
  if (!(lhs.third_ref() == rhs.third_ref())) {
    return lhs.third_ref() < rhs.third_ref();
  }
  if (!(lhs.isTrue_ref() == rhs.isTrue_ref())) {
    return lhs.isTrue_ref() < rhs.isTrue_ref();
  }
  return false;
}


void swap(BasicTypes& a, BasicTypes& b) {
  using ::std::swap;
  swap(a.first_ref().value(), b.first_ref().value());
  swap(a.second_ref().value_unchecked(), b.second_ref().value_unchecked());
  swap(a.third_ref().value_unchecked(), b.third_ref().value_unchecked());
  swap(a.isTrue_ref().value(), b.isTrue_ref().value());
  swap(a.__isset, b.__isset);
}

template void BasicTypes::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void BasicTypes::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void BasicTypes::readNoXfer<>(apache::thrift::NimbleProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::NimbleProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::NimbleProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::NimbleProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2

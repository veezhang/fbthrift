/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_B_metadata.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_C_metadata.h"

namespace test_cpp2 {
namespace cpp_reflection {
class service1SvIf;
}} // namespace test_cpp2::cpp_reflection
namespace test_cpp2 {
namespace cpp_reflection {
class service2SvIf;
}} // namespace test_cpp2::cpp_reflection
namespace test_cpp2 {
namespace cpp_reflection {
class service3SvIf;
}} // namespace test_cpp2::cpp_reflection
namespace test_cpp2 {
namespace cpp_reflection {
class service_with_special_namesSvIf;
}} // namespace test_cpp2::cpp_reflection

namespace apache {
namespace thrift {
namespace detail {
namespace md {

template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum1> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum2> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum3> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class EnumMetadata<::test_cpp2::cpp_reflection::enum_with_special_names> {
 public:
  static void gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::union1> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::union2> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::union3> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::structA> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::unionA> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::structB> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::structC> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct1> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct2> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct3> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct4> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct5> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct_binary> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::dep_A_struct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::dep_B_struct> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::annotated> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::union_with_special_names> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct_with_special_names> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class StructMetadata<::test_cpp2::cpp_reflection::struct_with_indirections> {
 public:
  static const ::apache::thrift::metadata::ThriftStruct& gen(ThriftMetadata& metadata);
};
template <>
class ServiceMetadata<::test_cpp2::cpp_reflection::service1SvIf> {
 public:
  static void gen(ThriftMetadata& metadata, ThriftServiceContext& context);
 private:
  static void gen_method1(ThriftMetadata& metadata, ThriftService& context);
  static void gen_method2(ThriftMetadata& metadata, ThriftService& context);
  static void gen_method3(ThriftMetadata& metadata, ThriftService& context);
  static void gen_method4(ThriftMetadata& metadata, ThriftService& context);
  static void gen_method5(ThriftMetadata& metadata, ThriftService& context);
  static void gen_method6(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::test_cpp2::cpp_reflection::service2SvIf> {
 public:
  static void gen(ThriftMetadata& metadata, ThriftServiceContext& context);
 private:
  static void gen_methodA(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodB(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodC(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodD(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodE(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodF(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::test_cpp2::cpp_reflection::service3SvIf> {
 public:
  static void gen(ThriftMetadata& metadata, ThriftServiceContext& context);
 private:
  static void gen_methodA(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodB(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodC(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodD(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodE(ThriftMetadata& metadata, ThriftService& context);
  static void gen_methodF(ThriftMetadata& metadata, ThriftService& context);
};
template <>
class ServiceMetadata<::test_cpp2::cpp_reflection::service_with_special_namesSvIf> {
 public:
  static void gen(ThriftMetadata& metadata, ThriftServiceContext& context);
 private:
  static void gen_get(ThriftMetadata& metadata, ThriftService& context);
  static void gen_getter(ThriftMetadata& metadata, ThriftService& context);
  static void gen_lists(ThriftMetadata& metadata, ThriftService& context);
  static void gen_maps(ThriftMetadata& metadata, ThriftService& context);
  static void gen_name(ThriftMetadata& metadata, ThriftService& context);
  static void gen_name_to_value(ThriftMetadata& metadata, ThriftService& context);
  static void gen_names(ThriftMetadata& metadata, ThriftService& context);
  static void gen_prefix_tree(ThriftMetadata& metadata, ThriftService& context);
  static void gen_sets(ThriftMetadata& metadata, ThriftService& context);
  static void gen_setter(ThriftMetadata& metadata, ThriftService& context);
  static void gen_str(ThriftMetadata& metadata, ThriftService& context);
  static void gen_strings(ThriftMetadata& metadata, ThriftService& context);
  static void gen_type(ThriftMetadata& metadata, ThriftService& context);
  static void gen_value(ThriftMetadata& metadata, ThriftService& context);
  static void gen_value_to_name(ThriftMetadata& metadata, ThriftService& context);
  static void gen_values(ThriftMetadata& metadata, ThriftService& context);
  static void gen_id(ThriftMetadata& metadata, ThriftService& context);
  static void gen_ids(ThriftMetadata& metadata, ThriftService& context);
  static void gen_descriptor(ThriftMetadata& metadata, ThriftService& context);
  static void gen_descriptors(ThriftMetadata& metadata, ThriftService& context);
  static void gen_key(ThriftMetadata& metadata, ThriftService& context);
  static void gen_keys(ThriftMetadata& metadata, ThriftService& context);
  static void gen_annotation(ThriftMetadata& metadata, ThriftService& context);
  static void gen_annotations(ThriftMetadata& metadata, ThriftService& context);
  static void gen_member(ThriftMetadata& metadata, ThriftService& context);
  static void gen_members(ThriftMetadata& metadata, ThriftService& context);
  static void gen_field(ThriftMetadata& metadata, ThriftService& context);
  static void gen_fields(ThriftMetadata& metadata, ThriftService& context);
};
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache

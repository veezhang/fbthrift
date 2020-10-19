/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/tablebased/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::test::fixtures::tablebased::ExampleEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.ExampleEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.ExampleEnum";
  using EnumTraits = TEnumTraits<::test::fixtures::tablebased::ExampleEnum>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::tablebased::TrivialTypesStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.TrivialTypesStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_TrivialTypesStruct = res.first->second;
  module_TrivialTypesStruct.name_ref() = "module.TrivialTypesStruct";
  module_TrivialTypesStruct.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_TrivialTypesStruct_fields[] = {
    std::make_tuple(1, "fieldA", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "fieldB", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(3, "fieldC", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE)),
    std::make_tuple(4, "fieldD", true, std::make_unique<Typedef>("module.IOBufPtr", std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE))),
    std::make_tuple(5, "fieldE", false, std::make_unique<Enum< ::test::fixtures::tablebased::ExampleEnum>>("module.ExampleEnum")),
  };
  for (const auto& f : module_TrivialTypesStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_TrivialTypesStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::tablebased::ContainerStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.ContainerStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ContainerStruct = res.first->second;
  module_ContainerStruct.name_ref() = "module.ContainerStruct";
  module_ContainerStruct.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ContainerStruct_fields[] = {
    std::make_tuple(12, "fieldA", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(2, "fieldB", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(3, "fieldC", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(4, "fieldD", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(5, "fieldE", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(6, "fieldF", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
    std::make_tuple(7, "fieldG", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))),
    std::make_tuple(8, "fieldH", false, std::make_unique<List>(std::make_unique<Struct< ::test::fixtures::tablebased::TrivialTypesStruct>>("module.TrivialTypesStruct"))),
  };
  for (const auto& f : module_ContainerStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_ContainerStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::tablebased::ExampleUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.ExampleUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_ExampleUnion = res.first->second;
  module_ExampleUnion.name_ref() = "module.ExampleUnion";
  module_ExampleUnion.is_union_ref() = true;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_ExampleUnion_fields[] = {
    std::make_tuple(1, "fieldA", false, std::make_unique<Struct< ::test::fixtures::tablebased::ContainerStruct>>("module.ContainerStruct")),
    std::make_tuple(2, "fieldB", false, std::make_unique<Struct< ::test::fixtures::tablebased::TrivialTypesStruct>>("module.TrivialTypesStruct")),
  };
  for (const auto& f : module_ExampleUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_ExampleUnion.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache

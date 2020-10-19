/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::cpp2::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.MyEnum";
  using EnumTraits = TEnumTraits<::cpp2::MyEnum>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name_ref() = "module.MyStruct";
  module_MyStruct.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_MyStruct_fields[] = {
    std::make_tuple(1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)),
    std::make_tuple(2, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_MyStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_hasDataById_id_1;
  module_MyService_hasDataById_id_1.id_ref() = 1;
  module_MyService_hasDataById_id_1.name_ref() = "id";
  module_MyService_hasDataById_id_1.is_optional_ref() = false;
  auto module_MyService_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_hasDataById_id_1_type->writeAndGenType(*module_MyService_hasDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_hasDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_getDataById_id_1;
  module_MyService_getDataById_id_1.id_ref() = 1;
  module_MyService_getDataById_id_1.name_ref() = "id";
  module_MyService_getDataById_id_1.is_optional_ref() = false;
  auto module_MyService_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_getDataById_id_1_type->writeAndGenType(*module_MyService_getDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_getDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_id_1;
  module_MyService_putDataById_id_1.id_ref() = 1;
  module_MyService_putDataById_id_1.name_ref() = "id";
  module_MyService_putDataById_id_1.is_optional_ref() = false;
  auto module_MyService_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_putDataById_id_1_type->writeAndGenType(*module_MyService_putDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_putDataById_data_2;
  module_MyService_putDataById_data_2.id_ref() = 2;
  module_MyService_putDataById_data_2.name_ref() = "data";
  module_MyService_putDataById_data_2.is_optional_ref() = false;
  auto module_MyService_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_putDataById_data_2_type->writeAndGenType(*module_MyService_putDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_putDataById_data_2));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_id_1;
  module_MyService_lobDataById_id_1.id_ref() = 1;
  module_MyService_lobDataById_id_1.name_ref() = "id";
  module_MyService_lobDataById_id_1.is_optional_ref() = false;
  auto module_MyService_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyService_lobDataById_id_1_type->writeAndGenType(*module_MyService_lobDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyService_lobDataById_data_2;
  module_MyService_lobDataById_data_2.id_ref() = 2;
  module_MyService_lobDataById_data_2.name_ref() = "data";
  module_MyService_lobDataById_data_2.is_optional_ref() = false;
  auto module_MyService_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyService_lobDataById_data_2_type->writeAndGenType(*module_MyService_lobDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyService_lobDataById_data_2));
  func.is_oneway_ref() = true;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyService;
  module_MyService.name_ref() = "module.MyService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_hasDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_getDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_putDataById,
    ServiceMetadata<::cpp2::MyServiceSvIf>::gen_lobDataById,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyService);
  }
  context.service_info_ref() = std::move(module_MyService);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
}
void ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_hasDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "hasDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyServiceFast_hasDataById_id_1;
  module_MyServiceFast_hasDataById_id_1.id_ref() = 1;
  module_MyServiceFast_hasDataById_id_1.name_ref() = "id";
  module_MyServiceFast_hasDataById_id_1.is_optional_ref() = false;
  auto module_MyServiceFast_hasDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyServiceFast_hasDataById_id_1_type->writeAndGenType(*module_MyServiceFast_hasDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyServiceFast_hasDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_getDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyServiceFast_getDataById_id_1;
  module_MyServiceFast_getDataById_id_1.id_ref() = 1;
  module_MyServiceFast_getDataById_id_1.name_ref() = "id";
  module_MyServiceFast_getDataById_id_1.is_optional_ref() = false;
  auto module_MyServiceFast_getDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyServiceFast_getDataById_id_1_type->writeAndGenType(*module_MyServiceFast_getDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyServiceFast_getDataById_id_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_putDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "putDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyServiceFast_putDataById_id_1;
  module_MyServiceFast_putDataById_id_1.id_ref() = 1;
  module_MyServiceFast_putDataById_id_1.name_ref() = "id";
  module_MyServiceFast_putDataById_id_1.is_optional_ref() = false;
  auto module_MyServiceFast_putDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyServiceFast_putDataById_id_1_type->writeAndGenType(*module_MyServiceFast_putDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyServiceFast_putDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyServiceFast_putDataById_data_2;
  module_MyServiceFast_putDataById_data_2.id_ref() = 2;
  module_MyServiceFast_putDataById_data_2.name_ref() = "data";
  module_MyServiceFast_putDataById_data_2.is_optional_ref() = false;
  auto module_MyServiceFast_putDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyServiceFast_putDataById_data_2_type->writeAndGenType(*module_MyServiceFast_putDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyServiceFast_putDataById_data_2));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_lobDataById(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "lobDataById";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_MyServiceFast_lobDataById_id_1;
  module_MyServiceFast_lobDataById_id_1.id_ref() = 1;
  module_MyServiceFast_lobDataById_id_1.name_ref() = "id";
  module_MyServiceFast_lobDataById_id_1.is_optional_ref() = false;
  auto module_MyServiceFast_lobDataById_id_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE);
  module_MyServiceFast_lobDataById_id_1_type->writeAndGenType(*module_MyServiceFast_lobDataById_id_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyServiceFast_lobDataById_id_1));
  ::apache::thrift::metadata::ThriftField module_MyServiceFast_lobDataById_data_2;
  module_MyServiceFast_lobDataById_data_2.id_ref() = 2;
  module_MyServiceFast_lobDataById_data_2.name_ref() = "data";
  module_MyServiceFast_lobDataById_data_2.is_optional_ref() = false;
  auto module_MyServiceFast_lobDataById_data_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_MyServiceFast_lobDataById_data_2_type->writeAndGenType(*module_MyServiceFast_lobDataById_data_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_MyServiceFast_lobDataById_data_2));
  func.is_oneway_ref() = true;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_MyServiceFast;
  module_MyServiceFast.name_ref() = "module.MyServiceFast";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_hasDataById,
    ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_getDataById,
    ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_putDataById,
    ServiceMetadata<::cpp2::MyServiceFastSvIf>::gen_lobDataById,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_MyServiceFast);
  }
  context.service_info_ref() = std::move(module_MyServiceFast);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
}
void ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey0(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataByKey0";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_DbMixedStackArguments_getDataByKey0_key_1;
  module_DbMixedStackArguments_getDataByKey0_key_1.id_ref() = 1;
  module_DbMixedStackArguments_getDataByKey0_key_1.name_ref() = "key";
  module_DbMixedStackArguments_getDataByKey0_key_1.is_optional_ref() = false;
  auto module_DbMixedStackArguments_getDataByKey0_key_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_DbMixedStackArguments_getDataByKey0_key_1_type->writeAndGenType(*module_DbMixedStackArguments_getDataByKey0_key_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_DbMixedStackArguments_getDataByKey0_key_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey1(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "getDataByKey1";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_DbMixedStackArguments_getDataByKey1_key_1;
  module_DbMixedStackArguments_getDataByKey1_key_1.id_ref() = 1;
  module_DbMixedStackArguments_getDataByKey1_key_1.name_ref() = "key";
  module_DbMixedStackArguments_getDataByKey1_key_1.is_optional_ref() = false;
  auto module_DbMixedStackArguments_getDataByKey1_key_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_DbMixedStackArguments_getDataByKey1_key_1_type->writeAndGenType(*module_DbMixedStackArguments_getDataByKey1_key_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_DbMixedStackArguments_getDataByKey1_key_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_DbMixedStackArguments;
  module_DbMixedStackArguments.name_ref() = "module.DbMixedStackArguments";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey0,
    ServiceMetadata<::cpp2::DbMixedStackArgumentsSvIf>::gen_getDataByKey1,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_DbMixedStackArguments);
  }
  context.service_info_ref() = std::move(module_DbMixedStackArguments);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache

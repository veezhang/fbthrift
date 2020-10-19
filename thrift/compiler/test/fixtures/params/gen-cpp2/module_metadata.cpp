/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_metadata.h"

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



void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapList(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "mapList";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_mapList_foo_1;
  module_NestedContainers_mapList_foo_1.id_ref() = 1;
  module_NestedContainers_mapList_foo_1.name_ref() = "foo";
  module_NestedContainers_mapList_foo_1.is_optional_ref() = false;
  auto module_NestedContainers_mapList_foo_1_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_mapList_foo_1_type->writeAndGenType(*module_NestedContainers_mapList_foo_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_NestedContainers_mapList_foo_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapSet(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "mapSet";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_mapSet_foo_1;
  module_NestedContainers_mapSet_foo_1.id_ref() = 1;
  module_NestedContainers_mapSet_foo_1.name_ref() = "foo";
  module_NestedContainers_mapSet_foo_1.is_optional_ref() = false;
  auto module_NestedContainers_mapSet_foo_1_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_mapSet_foo_1_type->writeAndGenType(*module_NestedContainers_mapSet_foo_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_NestedContainers_mapSet_foo_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listMap(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "listMap";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_listMap_foo_1;
  module_NestedContainers_listMap_foo_1.id_ref() = 1;
  module_NestedContainers_listMap_foo_1.name_ref() = "foo";
  module_NestedContainers_listMap_foo_1.is_optional_ref() = false;
  auto module_NestedContainers_listMap_foo_1_type = std::make_unique<List>(std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_listMap_foo_1_type->writeAndGenType(*module_NestedContainers_listMap_foo_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_NestedContainers_listMap_foo_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listSet(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "listSet";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_listSet_foo_1;
  module_NestedContainers_listSet_foo_1.id_ref() = 1;
  module_NestedContainers_listSet_foo_1.name_ref() = "foo";
  module_NestedContainers_listSet_foo_1.is_optional_ref() = false;
  auto module_NestedContainers_listSet_foo_1_type = std::make_unique<List>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_listSet_foo_1_type->writeAndGenType(*module_NestedContainers_listSet_foo_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_NestedContainers_listSet_foo_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_turtles(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "turtles";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_turtles_foo_1;
  module_NestedContainers_turtles_foo_1.id_ref() = 1;
  module_NestedContainers_turtles_foo_1.name_ref() = "foo";
  module_NestedContainers_turtles_foo_1.is_optional_ref() = false;
  auto module_NestedContainers_turtles_foo_1_type = std::make_unique<List>(std::make_unique<List>(std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))))));
  module_NestedContainers_turtles_foo_1_type->writeAndGenType(*module_NestedContainers_turtles_foo_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_NestedContainers_turtles_foo_1));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_NestedContainers;
  module_NestedContainers.name_ref() = "module.NestedContainers";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapList,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapSet,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listMap,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listSet,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_turtles,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_NestedContainers);
  }
  context.service_info_ref() = std::move(module_NestedContainers);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache

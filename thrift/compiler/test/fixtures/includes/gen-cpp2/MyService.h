/**
 * Autogenerated by Thrift for src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/service_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceSvAsyncIf {
 public:
  virtual ~MyServiceSvAsyncIf() {}
  virtual void async_tm_query(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) = 0;
  virtual folly::Future<folly::Unit> future_query(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_query(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) = 0;
  virtual void async_tm_has_arg_docs(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) = 0;
  virtual folly::Future<folly::Unit> future_has_arg_docs(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) = 0;
};

class MyServiceAsyncProcessor;

class MyServiceSvIf : public MyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  virtual void query(std::unique_ptr< ::cpp2::MyStruct> /*s*/, std::unique_ptr< ::cpp2::Included> /*i*/);
  folly::Future<folly::Unit> future_query(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) override;
  folly::SemiFuture<folly::Unit> semifuture_query(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) override;
  void async_tm_query(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) override;
  virtual void has_arg_docs(std::unique_ptr< ::cpp2::MyStruct> /*s*/, std::unique_ptr< ::cpp2::Included> /*i*/);
  folly::Future<folly::Unit> future_has_arg_docs(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) override;
  folly::SemiFuture<folly::Unit> semifuture_has_arg_docs(std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) override;
  void async_tm_has_arg_docs(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr< ::cpp2::MyStruct> s, std::unique_ptr< ::cpp2::Included> i) override;
};

class MyServiceSvNull : public MyServiceSvIf {
 public:
  void query(std::unique_ptr< ::cpp2::MyStruct> /*s*/, std::unique_ptr< ::cpp2::Included> /*i*/) override;
  void has_arg_docs(std::unique_ptr< ::cpp2::MyStruct> /*s*/, std::unique_ptr< ::cpp2::Included> /*i*/) override;
};

class MyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  MyServiceSvIf* iface_;
 public:
  void processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<MyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const MyServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const MyServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const MyServiceAsyncProcessor::ProcessMap binaryProcessMap_;
  static const MyServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_query(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_query(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_query(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_has_arg_docs(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_has_arg_docs(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServiceAsyncProcessor(MyServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~MyServiceAsyncProcessor() {}
};

} // cpp2

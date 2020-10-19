/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/stream/gen-cpp2/PubSubStreamingServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_returnstream_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>>
    > PubSubStreamingService_returnstream_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_streamthrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_streamthrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_boththrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_boththrows_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>> PubSubStreamingService_responseandstreamthrows_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>, 
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::cpp2::FooEx>>
    > PubSubStreamingService_responseandstreamthrows_presult;

template <typename Protocol_>
void PubSubStreamingServiceAsyncClient::returnstreamT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t i32_from, int32_t i32_to) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  PubSubStreamingService_returnstream_pargs args;
  args.get<0>().value = &i32_from;
  args.get<1>().value = &i32_to;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "returnstream", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void PubSubStreamingServiceAsyncClient::streamthrowsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  PubSubStreamingService_streamthrows_pargs args;
  args.get<0>().value = &foo;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "streamthrows", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void PubSubStreamingServiceAsyncClient::boththrowsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  PubSubStreamingService_boththrows_pargs args;
  args.get<0>().value = &foo;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "boththrows", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}

template <typename Protocol_>
void PubSubStreamingServiceAsyncClient::responseandstreamthrowsT(Protocol_* prot, apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo) {
  std::shared_ptr<apache::thrift::transport::THeader> header(ctx, &ctx->header);
  PubSubStreamingService_responseandstreamthrows_pargs args;
  args.get<0>().value = &foo;
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE, Protocol_>(prot, rpcOptions, std::move(callback), ctx->ctx, std::move(header), channel_.get(), "responseandstreamthrows", writer, sizer);
  ctx->reqContext.setRequestHeader(nullptr);
}



void PubSubStreamingServiceAsyncClient::returnstream(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to) {
  ::apache::thrift::RpcOptions rpcOptions;
  returnstream(rpcOptions, std::move(callback), i32_from, i32_to);
}

void PubSubStreamingServiceAsyncClient::returnstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.returnstream");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)),
    rpcOptions.getChunkBufferSize());
  returnstreamImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback), i32_from, i32_to);
}

void PubSubStreamingServiceAsyncClient::returnstreamImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t i32_from, int32_t i32_to) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      returnstreamT(&writer, rpcOptions, std::move(ctx), std::move(callback), i32_from, i32_to);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      returnstreamT(&writer, rpcOptions, std::move(ctx), std::move(callback), i32_from, i32_to);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::sync_returnstream(int32_t i32_from, int32_t i32_to) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_returnstream(rpcOptions, i32_from, i32_to);
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::sync_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.returnstream");
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::RequestClientCallback::Ptr(&callback),
    rpcOptions.getChunkBufferSize());
  returnstreamImpl(rpcOptions, ctx, std::move(wrappedCallback), i32_from, i32_to);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      return recv_returnstream(_returnState);
  });
}



folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> PubSubStreamingServiceAsyncClient::semifuture_returnstream(int32_t i32_from, int32_t i32_to) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_returnstream(rpcOptions, i32_from, i32_to);
}


folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> PubSubStreamingServiceAsyncClient::semifuture_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_returnstream, channel_);
  auto callback = std::move(callbackAndFuture.first);
  returnstream(rpcOptions, std::move(callback), i32_from, i32_to);
  return std::move(callbackAndFuture.second);
}


folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> PubSubStreamingServiceAsyncClient::header_semifuture_returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_returnstream, channel_);
  auto callback = std::move(callbackAndFuture.first);
  returnstream(rpcOptions, std::move(callback), i32_from, i32_to);
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_wrapped_returnstream(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = PubSubStreamingService_returnstream_presult;
  constexpr auto const fname = "returnstream";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::recv_returnstream(::apache::thrift::ClientReceiveState& state) {
  apache::thrift::ClientBufferedStream<int32_t> _return;
  auto ew = recv_wrapped_returnstream(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::recv_instance_returnstream(::apache::thrift::ClientReceiveState& state) {
  return recv_returnstream(state);
}

folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_instance_wrapped_returnstream(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_returnstream(_return, state);
}

void PubSubStreamingServiceAsyncClient::streamthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  streamthrows(rpcOptions, std::move(callback), foo);
}

void PubSubStreamingServiceAsyncClient::streamthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.streamthrows");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)),
    rpcOptions.getChunkBufferSize());
  streamthrowsImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback), foo);
}

void PubSubStreamingServiceAsyncClient::streamthrowsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      streamthrowsT(&writer, rpcOptions, std::move(ctx), std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      streamthrowsT(&writer, rpcOptions, std::move(ctx), std::move(callback), foo);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::sync_streamthrows(int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_streamthrows(rpcOptions, foo);
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::sync_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.streamthrows");
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::RequestClientCallback::Ptr(&callback),
    rpcOptions.getChunkBufferSize());
  streamthrowsImpl(rpcOptions, ctx, std::move(wrappedCallback), foo);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      return recv_streamthrows(_returnState);
  });
}



folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> PubSubStreamingServiceAsyncClient::semifuture_streamthrows(int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_streamthrows(rpcOptions, foo);
}


folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> PubSubStreamingServiceAsyncClient::semifuture_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_streamthrows, channel_);
  auto callback = std::move(callbackAndFuture.first);
  streamthrows(rpcOptions, std::move(callback), foo);
  return std::move(callbackAndFuture.second);
}


folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> PubSubStreamingServiceAsyncClient::header_semifuture_streamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_streamthrows, channel_);
  auto callback = std::move(callbackAndFuture.first);
  streamthrows(rpcOptions, std::move(callback), foo);
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_wrapped_streamthrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = PubSubStreamingService_streamthrows_presult;
  constexpr auto const fname = "streamthrows";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::recv_streamthrows(::apache::thrift::ClientReceiveState& state) {
  apache::thrift::ClientBufferedStream<int32_t> _return;
  auto ew = recv_wrapped_streamthrows(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::recv_instance_streamthrows(::apache::thrift::ClientReceiveState& state) {
  return recv_streamthrows(state);
}

folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_instance_wrapped_streamthrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_streamthrows(_return, state);
}

void PubSubStreamingServiceAsyncClient::boththrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  boththrows(rpcOptions, std::move(callback), foo);
}

void PubSubStreamingServiceAsyncClient::boththrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.boththrows");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)),
    rpcOptions.getChunkBufferSize());
  boththrowsImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback), foo);
}

void PubSubStreamingServiceAsyncClient::boththrowsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      boththrowsT(&writer, rpcOptions, std::move(ctx), std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      boththrowsT(&writer, rpcOptions, std::move(ctx), std::move(callback), foo);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::sync_boththrows(int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_boththrows(rpcOptions, foo);
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::sync_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.boththrows");
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::RequestClientCallback::Ptr(&callback),
    rpcOptions.getChunkBufferSize());
  boththrowsImpl(rpcOptions, ctx, std::move(wrappedCallback), foo);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      return recv_boththrows(_returnState);
  });
}



folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> PubSubStreamingServiceAsyncClient::semifuture_boththrows(int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_boththrows(rpcOptions, foo);
}


folly::SemiFuture<apache::thrift::ClientBufferedStream<int32_t>> PubSubStreamingServiceAsyncClient::semifuture_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_boththrows, channel_);
  auto callback = std::move(callbackAndFuture.first);
  boththrows(rpcOptions, std::move(callback), foo);
  return std::move(callbackAndFuture.second);
}


folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> PubSubStreamingServiceAsyncClient::header_semifuture_boththrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_boththrows, channel_);
  auto callback = std::move(callbackAndFuture.first);
  boththrows(rpcOptions, std::move(callback), foo);
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_wrapped_boththrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = PubSubStreamingService_boththrows_presult;
  constexpr auto const fname = "boththrows";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::recv_boththrows(::apache::thrift::ClientReceiveState& state) {
  apache::thrift::ClientBufferedStream<int32_t> _return;
  auto ew = recv_wrapped_boththrows(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

apache::thrift::ClientBufferedStream<int32_t> PubSubStreamingServiceAsyncClient::recv_instance_boththrows(::apache::thrift::ClientReceiveState& state) {
  return recv_boththrows(state);
}

folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_instance_wrapped_boththrows(apache::thrift::ClientBufferedStream<int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_boththrows(_return, state);
}

void PubSubStreamingServiceAsyncClient::responseandstreamthrows(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  responseandstreamthrows(rpcOptions, std::move(callback), foo);
}

void PubSubStreamingServiceAsyncClient::responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t foo) {
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(),
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.responseandstreamthrows");
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  callbackContext.ctx = std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx);
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext)),
    rpcOptions.getChunkBufferSize());
  responseandstreamthrowsImpl(rpcOptions, std::move(ctx), std::move(wrappedCallback), foo);
}

void PubSubStreamingServiceAsyncClient::responseandstreamthrowsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback, int32_t foo) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      responseandstreamthrowsT(&writer, rpcOptions, std::move(ctx), std::move(callback), foo);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      responseandstreamthrowsT(&writer, rpcOptions, std::move(ctx), std::move(callback), foo);
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> PubSubStreamingServiceAsyncClient::sync_responseandstreamthrows(int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_responseandstreamthrows(rpcOptions, foo);
}

apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> PubSubStreamingServiceAsyncClient::sync_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  apache::thrift::ClientReceiveState _returnState;
  apache::thrift::ClientSyncCallback<false> callback(&_returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctx = std::make_shared<apache::thrift::detail::ac::ClientRequestContext>(
      protocolId,
      rpcOptions.releaseWriteHeaders(),
      this->handlers_,
      this->getServiceName(),
      "PubSubStreamingService.responseandstreamthrows");
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::RequestClientCallback::Ptr(&callback),
    rpcOptions.getChunkBufferSize());
  responseandstreamthrowsImpl(rpcOptions, ctx, std::move(wrappedCallback), foo);
  callback.waitUntilDone(evb);
  _returnState.resetProtocolId(protocolId);
  _returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(!!_returnState.exception());
    _returnState.exception().throw_exception();
  }
  return folly::fibers::runInMainContext([&] {
      return recv_responseandstreamthrows(_returnState);
  });
}



folly::SemiFuture<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> PubSubStreamingServiceAsyncClient::semifuture_responseandstreamthrows(int32_t foo) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_responseandstreamthrows(rpcOptions, foo);
}


folly::SemiFuture<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> PubSubStreamingServiceAsyncClient::semifuture_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_responseandstreamthrows, channel_);
  auto callback = std::move(callbackAndFuture.first);
  responseandstreamthrows(rpcOptions, std::move(callback), foo);
  return std::move(callbackAndFuture.second);
}


folly::SemiFuture<std::pair<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>, std::unique_ptr<apache::thrift::transport::THeader>>> PubSubStreamingServiceAsyncClient::header_semifuture_responseandstreamthrows(apache::thrift::RpcOptions& rpcOptions, int32_t foo) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_responseandstreamthrows, channel_);
  auto callback = std::move(callbackAndFuture.first);
  responseandstreamthrows(rpcOptions, std::move(callback), foo);
  return std::move(callbackAndFuture.second);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_wrapped_responseandstreamthrows(apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = PubSubStreamingService_responseandstreamthrows_presult;
  constexpr auto const fname = "responseandstreamthrows";
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          fname, &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> PubSubStreamingServiceAsyncClient::recv_responseandstreamthrows(::apache::thrift::ClientReceiveState& state) {
  apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> _return;
  auto ew = recv_wrapped_responseandstreamthrows(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t> PubSubStreamingServiceAsyncClient::recv_instance_responseandstreamthrows(::apache::thrift::ClientReceiveState& state) {
  return recv_responseandstreamthrows(state);
}

folly::exception_wrapper PubSubStreamingServiceAsyncClient::recv_instance_wrapped_responseandstreamthrows(apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_responseandstreamthrows(_return, state);
}


} // cpp2

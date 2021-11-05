#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from thrift.py3lite.client.client_wrapper import ClientWrapper as _fbthrift_py3lite_ClientWrapper
from thrift.py3lite.sync_client import SyncClient as _fbthrift_py3lite_SyncClient
from thrift.py3lite.async_client import AsyncClient as _fbthrift_py3lite_AsyncClient
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions
import thrift.py3lite.types as _fbthrift_py3lite_types
import my.namespacing.test.module.module.lite_types


class TestService(_fbthrift_py3lite_ClientWrapper["TestService.Async", "TestService.Sync"]):
    class Sync(_fbthrift_py3lite_SyncClient):
        def __init__(self, channel):
            super().__init__(channel)

        def init(
            self,
            int1: int
        ) -> int:
            resp = self._send_request(
                "TestService",
                "init",
                my.namespacing.test.module.module.lite_types._fbthrift_TestService_init_args(
                    int1=int1,),
                my.namespacing.test.module.module.lite_types._fbthrift_TestService_init_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )

    class Async(_fbthrift_py3lite_AsyncClient):
        def __init__(self):
            super().__init__()

        async def init(
            self,
            int1: int
        ) -> int:
            resp = await self._send_request(
                "TestService",
                "init",
                my.namespacing.test.module.module.lite_types._fbthrift_TestService_init_args(
                    int1=int1,),
                my.namespacing.test.module.module.lite_types._fbthrift_TestService_init_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )



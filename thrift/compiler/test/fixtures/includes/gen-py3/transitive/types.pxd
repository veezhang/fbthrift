#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport bstring, move
from folly.optional cimport cOptional





cdef extern from "gen-cpp2/transitive_types_custom_protocol.h" namespace "cpp2":
    # Forward Declaration
    cdef cppclass cFoo "cpp2::Foo"

cdef extern from "gen-cpp2/transitive_types.h" namespace "cpp2":
    cdef cppclass cFoo__isset "cpp2::Foo::__isset":
        bint a

    cdef cppclass cFoo "cpp2::Foo":
        cFoo() except +
        cFoo(const cFoo&) except +
        bint operator==(cFoo&)
        int64_t a
        cFoo__isset __isset


cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cFoo] move(unique_ptr[cFoo])
    cdef shared_ptr[cFoo] move_shared "std::move"(shared_ptr[cFoo])
    cdef unique_ptr[cFoo] move_unique "std::move"(unique_ptr[cFoo])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cFoo] const_pointer_cast "std::const_pointer_cast<const cpp2::Foo>"(shared_ptr[cFoo])

# Forward Definition of the cython struct
cdef class Foo(thrift.py3.types.Struct)


cdef class Foo(thrift.py3.types.Struct):
    cdef object __hash
    cdef object __weakref__
    cdef shared_ptr[cFoo] _cpp_obj

    @staticmethod
    cdef unique_ptr[cFoo] _make_instance(
        cFoo* base_instance,
        object a
    ) except *

    @staticmethod
    cdef create(shared_ptr[cFoo])





cdef extern from "gen-cpp2/transitive_constants.h" namespace "cpp2":
    cdef cFoo cExampleFoo "cpp2::transitive_constants::ExampleFoo"()

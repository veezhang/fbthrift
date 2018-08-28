#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t, uint32_t
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types import NOTSET as __NOTSET
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
)
cimport thrift.py3.std_libcpp as std_libcpp
from thrift.py3.serializer import Protocol as __Protocol
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections import Sequence, Set, Mapping, Iterable
import warnings
import builtins as _builtins


cdef class List__string:
    def __init__(self, items=None):
        if isinstance(items, List__string):
            self._cpp_obj = (<List__string> items)._cpp_obj
        else:
            self._cpp_obj = List__string._make_instance(items)

    @staticmethod
    cdef create(shared_ptr[vector[string]] c_items):
        inst = <List__string>List__string.__new__(List__string)
        inst._cpp_obj = move_shared(c_items)
        return inst

    def __copy__(List__string self):
        cdef shared_ptr[vector[string]] cpp_obj = make_shared[vector[string]](
            deref(self._cpp_obj)
        )
        return List__string.create(move_shared(cpp_obj))

    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *:
        cdef shared_ptr[vector[string]] c_inst = make_shared[vector[string]]()
        if items is not None:
            for item in items:
                if not isinstance(item, str):
                    raise TypeError(f"{item!r} is not of type str")
                deref(c_inst).push_back(item.encode('UTF-8'))
        return c_inst

    def __add__(object self, object other):
        return type(self)(itertools.chain(self, other))

    def __getitem__(self, object index_obj):
        cdef shared_ptr[vector[string]] c_inst
        cdef string citem
        if isinstance(index_obj, slice):
            c_inst = make_shared[vector[string]]()
            sz = deref(self._cpp_obj).size()
            for index in range(*index_obj.indices(sz)):
                deref(c_inst).push_back(deref(self._cpp_obj)[index])
            return List__string.create(move_shared(c_inst))
        else:
            index = <int?>index_obj
            size = len(self)
            # Convert a negative index
            if index < 0:
                index = size + index
            if index >= size or index < 0:
                raise IndexError('list index out of range')
            citem = deref(self._cpp_obj)[index]
            return bytes(citem).decode('UTF-8')

    def __len__(self):
        return deref(self._cpp_obj).size()

    def __richcmp__(self, other, op):
        cdef int cop = op
        if cop not in (2, 3):
            raise TypeError("unorderable types: {}, {}".format(type(self), type(other)))
        if not (isinstance(self, Iterable) and isinstance(other, Iterable)):
            return cop != 2
        if (len(self) != len(other)):
            return cop != 2

        for one, two in zip(self, other):
            if one != two:
                return cop != 2

        return cop == 2

    def __hash__(self):
        if not self.__hash:
            self.__hash = hash(tuple(self))
        return self.__hash

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, str):
            return False
        return std_libcpp.find[vector[string].iterator, string](deref(self._cpp_obj).begin(), deref(self._cpp_obj).end(), item.encode('UTF-8')) != deref(self._cpp_obj).end()

    def __iter__(self):
        if not self:
            raise StopIteration
        cdef string citem
        cdef vector[string].iterator loc = deref(self._cpp_obj).begin()
        while loc != deref(self._cpp_obj).end():
            citem = deref(loc)
            yield bytes(citem).decode('UTF-8')
            inc(loc)


    def __repr__(self):
        if not self:
            return 'i[]'
        return f'i[{", ".join(map(repr, self))}]'

    def __reversed__(self):
        if not self:
            raise StopIteration
        cdef string citem
        cdef vector[string].reverse_iterator loc = deref(self._cpp_obj).rbegin()
        while loc != deref(self._cpp_obj).rend():
            citem = deref(loc)
            yield bytes(citem).decode('UTF-8')
            inc(loc)

    def index(self, item, start not None=__NOTSET, stop not None=__NOTSET):
        err = ValueError(f'{item} is not in list')
        if not self or item is None:
            raise err
        offset_begin = offset_end = 0
        if stop is not __NOTSET or start is not __NOTSET:
            # Like self[start:stop].index(item)
            size = len(self)
            stop = stop if stop is not __NOTSET else size
            start = start if start is not __NOTSET else 0
            # Convert stop to a negative position.
            if stop > 0:
                stop = min(stop - size, 0)
            if stop <= -size:
                raise err  # List would be empty
            offset_end = -stop
            # Convert start to always be positive
            if start < 0:
                start = max(size + start, 0)
            if start >= size:
                raise err  # past end of list
            offset_begin = start

        if not isinstance(item, str):
            raise err
        cdef vector[string].iterator end = std_libcpp.prev(deref(self._cpp_obj).end(), <int64_t>offset_end)
        cdef vector[string].iterator loc = std_libcpp.find[vector[string].iterator, string](
            std_libcpp.next(deref(self._cpp_obj).begin(), <int64_t>offset_begin),
            end,
            item.encode('UTF-8')        )
        if loc != end:
            return <int64_t> std_libcpp.distance(deref(self._cpp_obj).begin(), loc)
        raise err

    def count(self, item):
        if not self or item is None:
            return 0
        if not isinstance(item, str):
            return 0
        return <int64_t> std_libcpp.count[vector[string].iterator, string](
            deref(self._cpp_obj).begin(), deref(self._cpp_obj).end(), item.encode('UTF-8'))


Sequence.register(List__string)

cdef class Map__i64_List__string:
    def __init__(self, items=None):
        if isinstance(items, Map__i64_List__string):
            self._cpp_obj = (<Map__i64_List__string> items)._cpp_obj
        else:
            self._cpp_obj = Map__i64_List__string._make_instance(items)

    @staticmethod
    cdef create(shared_ptr[cmap[int64_t,vector[string]]] c_items):
        inst = <Map__i64_List__string>Map__i64_List__string.__new__(Map__i64_List__string)
        inst._cpp_obj = move_shared(c_items)
        return inst

    def __copy__(Map__i64_List__string self):
        cdef shared_ptr[cmap[int64_t,vector[string]]] cpp_obj = make_shared[cmap[int64_t,vector[string]]](
            deref(self._cpp_obj)
        )
        return Map__i64_List__string.create(move_shared(cpp_obj))

    @staticmethod
    cdef shared_ptr[cmap[int64_t,vector[string]]] _make_instance(object items) except *:
        cdef shared_ptr[cmap[int64_t,vector[string]]] c_inst = make_shared[cmap[int64_t,vector[string]]]()
        if items is not None:
            for key, item in items.items():
                if not isinstance(key, int):
                    raise TypeError(f"{key!r} is not of type int")
                key = <int64_t> key
                if item is None:
                    raise TypeError("None is not of type _typing.Sequence[str]")
                if not isinstance(item, List__string):
                    item = List__string(item)

                deref(c_inst)[key] = deref((<List__string>item)._cpp_obj)
        return c_inst

    def __getitem__(self, key):
        err = KeyError(f'{key}')
        if not self or key is None:
            raise err
        if not isinstance(key, int):
            raise err from None
        cdef cmap[int64_t,vector[string]].iterator iter = deref(
            self._cpp_obj).find(key)
        if iter == deref(self._cpp_obj).end():
            raise err
        cdef shared_ptr[vector[string]] citem = reference_shared_ptr_Map__i64_List__string(self._cpp_obj, deref(iter).second)
        return List__string.create(citem)

    def __len__(self):
        return deref(self._cpp_obj).size()

    def __iter__(self):
        if not self:
            raise StopIteration
        cdef int64_t citem
        cdef cmap[int64_t,vector[string]].iterator loc = deref(self._cpp_obj).begin()
        while loc != deref(self._cpp_obj).end():
            citem = deref(loc).first
            yield citem
            inc(loc)

    def __richcmp__(self, other, op):
        cdef int cop = op
        if cop not in (2, 3):
            raise TypeError("unorderable types: {}, {}".format(type(self), type(other)))
        if not (isinstance(self, Mapping) and isinstance(other, Mapping)):
            return cop != 2
        if (len(self) != len(other)):
            return cop != 2

        for key in self:
            if key not in other:
                return cop != 2
            if other[key] != self[key]:
                return cop != 2

        return cop == 2

    def __hash__(self):
        if not self.__hash:
            self.__hash = hash(tuple(self.items()))
        return self.__hash

    def __repr__(self):
        if not self:
            return 'i{}'
        return f'i{{{", ".join(map(lambda i: f"{repr(i[0])}: {repr(i[1])}", self.items()))}}}'

    def __contains__(self, key):
        if not self or key is None:
            return False
        if not isinstance(key, int):
            return False
        cdef int64_t ckey = key
        return deref(self._cpp_obj).count(ckey) > 0

    def get(self, key, default=None):
        if not self or key is None:
            return default
        try:
            if not isinstance(key, int):
                key = int(key)
        except Exception:
            return default
        if not isinstance(key, int):
            return default
        if key not in self:
            return default
        return self[key]

    def keys(self):
        return self.__iter__()

    def values(self):
        if not self:
            raise StopIteration
        cdef shared_ptr[vector[string]] citem
        cdef cmap[int64_t,vector[string]].iterator loc = deref(self._cpp_obj).begin()
        while loc != deref(self._cpp_obj).end():
            citem = reference_shared_ptr_Map__i64_List__string(self._cpp_obj, deref(loc).second)
            yield List__string.create(citem)
            inc(loc)

    def items(self):
        if not self:
            raise StopIteration
        cdef int64_t ckey
        cdef shared_ptr[vector[string]] citem
        cdef cmap[int64_t,vector[string]].iterator loc = deref(self._cpp_obj).begin()
        while loc != deref(self._cpp_obj).end():
            ckey = deref(loc).first
            citem = reference_shared_ptr_Map__i64_List__string(self._cpp_obj, deref(loc).second)
            yield (ckey, List__string.create(citem))
            inc(loc)



Mapping.register(Map__i64_List__string)

TEST_MAP = Map__i64_List__string.create(constant_shared_ptr(cTEST_MAP()))

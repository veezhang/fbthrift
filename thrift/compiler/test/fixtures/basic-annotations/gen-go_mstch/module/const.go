// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
  cpp "thrift/annotation/cpp"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = cpp.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

var GoUnusedProtection__ int

var MyStruct MyStruct = *NewMyStruct().
    SetMajor(42).
    SetPackage("package").
    SetMyEnum(MyEnum_DOMAIN)

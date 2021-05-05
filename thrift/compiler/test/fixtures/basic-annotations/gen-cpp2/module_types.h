/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct name;
struct majorVer;
struct package;
struct annotation_with_quote;
struct class_;
struct annotation_with_trailing_comma;
struct empty_annotations;
struct id;
struct password;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_name
#define APACHE_THRIFT_ACCESSOR_name
APACHE_THRIFT_DEFINE_ACCESSOR(name);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_majorVer
#define APACHE_THRIFT_ACCESSOR_majorVer
APACHE_THRIFT_DEFINE_ACCESSOR(majorVer);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_package
#define APACHE_THRIFT_ACCESSOR_package
APACHE_THRIFT_DEFINE_ACCESSOR(package);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_annotation_with_quote
#define APACHE_THRIFT_ACCESSOR_annotation_with_quote
APACHE_THRIFT_DEFINE_ACCESSOR(annotation_with_quote);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_class_
#define APACHE_THRIFT_ACCESSOR_class_
APACHE_THRIFT_DEFINE_ACCESSOR(class_);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_annotation_with_trailing_comma
#define APACHE_THRIFT_ACCESSOR_annotation_with_trailing_comma
APACHE_THRIFT_DEFINE_ACCESSOR(annotation_with_trailing_comma);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_empty_annotations
#define APACHE_THRIFT_ACCESSOR_empty_annotations
APACHE_THRIFT_DEFINE_ACCESSOR(empty_annotations);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_password
#define APACHE_THRIFT_ACCESSOR_password
APACHE_THRIFT_DEFINE_ACCESSOR(password);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
  REALM = 2,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::MyEnum> :
  ::apache::thrift::detail::enum_hash<::cpp2::MyEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::MyEnum>;

template <> struct TEnumTraits<::cpp2::MyEnum> {
  using type = ::cpp2::MyEnum;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::REALM; }
};


}} // apache::thrift

namespace cpp2 {

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class MyStructNestedAnnotation;
class MyStruct;
class SecretStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyStructNestedAnnotation final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyStructNestedAnnotation;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  MyStructNestedAnnotation() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStructNestedAnnotation(apache::thrift::FragileConstructor, ::std::string name__arg);

  MyStructNestedAnnotation(MyStructNestedAnnotation&&) noexcept;

  MyStructNestedAnnotation(const MyStructNestedAnnotation& src);


  MyStructNestedAnnotation& operator=(MyStructNestedAnnotation&&) noexcept;
  MyStructNestedAnnotation& operator=(const MyStructNestedAnnotation& src);
  void __clear();
 private:
  ::std::string name;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool name;
  } __isset = {};

  bool operator==(const MyStructNestedAnnotation&) const;
  bool operator<(const MyStructNestedAnnotation&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> name_ref() const& {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> name_ref() const&& {
    return {std::move(this->name), __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> name_ref() & {
    return {this->name, __isset.name};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> name_ref() && {
    return {std::move(this->name), __isset.name};
  }

  const ::std::string& get_name() const& {
    return name;
  }

  ::std::string get_name() && {
    return std::move(name);
  }

  template <typename T_MyStructNestedAnnotation_name_struct_setter = ::std::string>
  ::std::string& set_name(T_MyStructNestedAnnotation_name_struct_setter&& name_) {
    name = std::forward<T_MyStructNestedAnnotation_name_struct_setter>(name_);
    __isset.name = true;
    return name;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStructNestedAnnotation>;
  friend void swap(MyStructNestedAnnotation& a, MyStructNestedAnnotation& b);
};

template <class Protocol_>
uint32_t MyStructNestedAnnotation::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:
  MyStruct& _data() & { return *this; }
  MyStruct&& _data() && { return std::move(*this); }
  const MyStruct& _data() const& { return *this; }
  const MyStruct&& _data() const&& { return std::move(*this); }

 public:

  MyStruct();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor, ::std::int64_t majorVer__arg, ::std::string package__arg, ::std::string annotation_with_quote__arg, ::std::string class___arg, ::std::string annotation_with_trailing_comma__arg, ::std::string empty_annotations__arg);

  MyStruct(MyStruct&&) noexcept;

  MyStruct(const MyStruct& src);


  MyStruct& operator=(MyStruct&&) noexcept;
  MyStruct& operator=(const MyStruct& src);
  void __clear();

  ~MyStruct();

 private:
  ::std::int64_t majorVer;
 private:
  ::std::string package;
 private:
  ::std::string annotation_with_quote;
 private:
  ::std::string class_;
 private:
  ::std::string annotation_with_trailing_comma;
 private:
  ::std::string empty_annotations;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool majorVer;
    bool package;
    bool annotation_with_quote;
    bool class_;
    bool annotation_with_trailing_comma;
    bool empty_annotations;
  } __isset = {};

  bool operator==(const MyStruct&) const;
  bool operator<(const MyStruct&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> majorVer_ref() const& {
    return {this->majorVer, __isset.majorVer};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> majorVer_ref() const&& {
    return {std::move(this->majorVer), __isset.majorVer};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> majorVer_ref() & {
    return {this->majorVer, __isset.majorVer};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> majorVer_ref() && {
    return {std::move(this->majorVer), __isset.majorVer};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> package_ref() const& {
    return {this->package, __isset.package};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> package_ref() const&& {
    return {std::move(this->package), __isset.package};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> package_ref() & {
    return {this->package, __isset.package};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> package_ref() && {
    return {std::move(this->package), __isset.package};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> annotation_with_quote_ref() const& {
    return {this->annotation_with_quote, __isset.annotation_with_quote};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> annotation_with_quote_ref() const&& {
    return {std::move(this->annotation_with_quote), __isset.annotation_with_quote};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> annotation_with_quote_ref() & {
    return {this->annotation_with_quote, __isset.annotation_with_quote};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> annotation_with_quote_ref() && {
    return {std::move(this->annotation_with_quote), __isset.annotation_with_quote};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> class__ref() const& {
    return {this->class_, __isset.class_};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> class__ref() const&& {
    return {std::move(this->class_), __isset.class_};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> class__ref() & {
    return {this->class_, __isset.class_};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> class__ref() && {
    return {std::move(this->class_), __isset.class_};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> annotation_with_trailing_comma_ref() const& {
    return {this->annotation_with_trailing_comma, __isset.annotation_with_trailing_comma};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> annotation_with_trailing_comma_ref() const&& {
    return {std::move(this->annotation_with_trailing_comma), __isset.annotation_with_trailing_comma};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> annotation_with_trailing_comma_ref() & {
    return {this->annotation_with_trailing_comma, __isset.annotation_with_trailing_comma};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> annotation_with_trailing_comma_ref() && {
    return {std::move(this->annotation_with_trailing_comma), __isset.annotation_with_trailing_comma};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> empty_annotations_ref() const& {
    return {this->empty_annotations, __isset.empty_annotations};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> empty_annotations_ref() const&& {
    return {std::move(this->empty_annotations), __isset.empty_annotations};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> empty_annotations_ref() & {
    return {this->empty_annotations, __isset.empty_annotations};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> empty_annotations_ref() && {
    return {std::move(this->empty_annotations), __isset.empty_annotations};
  }

  ::std::int64_t get_majorVer() const {
    return majorVer;
  }

  ::std::int64_t& set_majorVer(::std::int64_t majorVer_) {
    majorVer = majorVer_;
    __isset.majorVer = true;
    return majorVer;
  }

  const ::std::string& get_package() const& {
    return package;
  }

  ::std::string get_package() && {
    return std::move(package);
  }

  template <typename T_MyStruct_package_struct_setter = ::std::string>
  ::std::string& set_package(T_MyStruct_package_struct_setter&& package_) {
    package = std::forward<T_MyStruct_package_struct_setter>(package_);
    __isset.package = true;
    return package;
  }

  const ::std::string& get_annotation_with_quote() const& {
    return annotation_with_quote;
  }

  ::std::string get_annotation_with_quote() && {
    return std::move(annotation_with_quote);
  }

  template <typename T_MyStruct_annotation_with_quote_struct_setter = ::std::string>
  ::std::string& set_annotation_with_quote(T_MyStruct_annotation_with_quote_struct_setter&& annotation_with_quote_) {
    annotation_with_quote = std::forward<T_MyStruct_annotation_with_quote_struct_setter>(annotation_with_quote_);
    __isset.annotation_with_quote = true;
    return annotation_with_quote;
  }

  const ::std::string& get_class_() const& {
    return class_;
  }

  ::std::string get_class_() && {
    return std::move(class_);
  }

  template <typename T_MyStruct_class__struct_setter = ::std::string>
  ::std::string& set_class_(T_MyStruct_class__struct_setter&& class__) {
    class_ = std::forward<T_MyStruct_class__struct_setter>(class__);
    __isset.class_ = true;
    return class_;
  }

  const ::std::string& get_annotation_with_trailing_comma() const& {
    return annotation_with_trailing_comma;
  }

  ::std::string get_annotation_with_trailing_comma() && {
    return std::move(annotation_with_trailing_comma);
  }

  template <typename T_MyStruct_annotation_with_trailing_comma_struct_setter = ::std::string>
  ::std::string& set_annotation_with_trailing_comma(T_MyStruct_annotation_with_trailing_comma_struct_setter&& annotation_with_trailing_comma_) {
    annotation_with_trailing_comma = std::forward<T_MyStruct_annotation_with_trailing_comma_struct_setter>(annotation_with_trailing_comma_);
    __isset.annotation_with_trailing_comma = true;
    return annotation_with_trailing_comma;
  }

  const ::std::string& get_empty_annotations() const& {
    return empty_annotations;
  }

  ::std::string get_empty_annotations() && {
    return std::move(empty_annotations);
  }

  template <typename T_MyStruct_empty_annotations_struct_setter = ::std::string>
  ::std::string& set_empty_annotations(T_MyStruct_empty_annotations_struct_setter&& empty_annotations_) {
    empty_annotations = std::forward<T_MyStruct_empty_annotations_struct_setter>(empty_annotations_);
    __isset.empty_annotations = true;
    return empty_annotations;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<MyStruct>;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class SecretStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = SecretStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SecretStruct() :
      id(0) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SecretStruct(apache::thrift::FragileConstructor, ::std::int64_t id__arg, ::std::string password__arg);

  SecretStruct(SecretStruct&&) noexcept;

  SecretStruct(const SecretStruct& src);


  SecretStruct& operator=(SecretStruct&&) noexcept;
  SecretStruct& operator=(const SecretStruct& src);
  void __clear();
 private:
  ::std::int64_t id;
 private:
  ::std::string password;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool id;
    bool password;
  } __isset = {};

  bool operator==(const SecretStruct&) const;
  bool operator<(const SecretStruct&) const;

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> password_ref() const& {
    return {this->password, __isset.password};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> password_ref() const&& {
    return {std::move(this->password), __isset.password};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> password_ref() & {
    return {this->password, __isset.password};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> password_ref() && {
    return {std::move(this->password), __isset.password};
  }

  ::std::int64_t get_id() const {
    return id;
  }

  ::std::int64_t& set_id(::std::int64_t id_) {
    id = id_;
    __isset.id = true;
    return id;
  }

  const ::std::string& get_password() const& {
    return password;
  }

  ::std::string get_password() && {
    return std::move(password);
  }

  template <typename T_SecretStruct_password_struct_setter = ::std::string>
  ::std::string& set_password(T_SecretStruct_password_struct_setter&& password_) {
    password = std::forward<T_SecretStruct_password_struct_setter>(password_);
    __isset.password = true;
    return password;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<SecretStruct>;
  friend void swap(SecretStruct& a, SecretStruct& b);
};

template <class Protocol_>
uint32_t SecretStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END

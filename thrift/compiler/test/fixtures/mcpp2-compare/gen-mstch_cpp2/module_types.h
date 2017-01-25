/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class Empty;
class MyStruct;
typedef int32_t simpleTypeDef;

typedef std::map<int16_t, std::string> containerTypeDef;

typedef std::vector<std::map<int16_t, std::string>> complexContainerTypeDef;

class MyStruct;
typedef std::vector< ::cpp2::MyStruct> structTypeDef;

class Empty;
class MyStruct;
typedef std::vector<std::map< ::cpp2::Empty,  ::cpp2::MyStruct>> complexStructTypeDef;

typedef std::vector< ::cpp2::complexStructTypeDef> mostComplexTypeDef;

class Empty : private apache::thrift::detail::st::ComparisonOperators<Empty> {
 public:

  Empty() {}
  // FragileConstructor for use in initialization lists only

  Empty(apache::thrift::FragileConstructor) {}

  Empty(Empty&&) = default;

  Empty(const Empty&) = default;

  Empty& operator=(Empty&&) = default;

  Empty& operator=(const Empty&) = default;

  virtual ~Empty() throw() {}

  bool operator==(const Empty& /* rhs */) const;

  bool operator < (const Empty& rhs) const {
    (void)rhs;
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Empty& a, Empty& b);
extern template uint32_t Empty::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Empty::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Empty::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Empty::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Empty::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Empty::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Empty::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Empty::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Empty>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::write(Protocol* proto,  ::cpp2::Empty const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::read(Protocol* proto,  ::cpp2::Empty* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::serializedSize(Protocol const* proto,  ::cpp2::Empty const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Empty>::serializedSizeZC(Protocol const* proto,  ::cpp2::Empty const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class MyStruct : private apache::thrift::detail::st::ComparisonOperators<MyStruct> {
 public:

  MyStruct() :
      MyBoolField(0),
      MyIntField(12LL),
      MyStringField(apache::thrift::StringTraits< std::string>::fromStringLiteral("test")) {}
  // FragileConstructor for use in initialization lists only

  MyStruct(apache::thrift::FragileConstructor, bool MyBoolField__arg, int64_t MyIntField__arg, std::string MyStringField__arg, std::string MyStringField2__arg) :
      MyBoolField(std::move(MyBoolField__arg)),
      MyIntField(std::move(MyIntField__arg)),
      MyStringField(std::move(MyStringField__arg)),
      MyStringField2(std::move(MyStringField2__arg)) {
    __isset.MyBoolField = true;
    __isset.MyIntField = true;
    __isset.MyStringField = true;
    __isset.MyStringField2 = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyBoolField = arg.move();
    __isset.MyBoolField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyIntField = arg.move();
    __isset.MyIntField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyStringField = arg.move();
    __isset.MyStringField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyStringField2 = arg.move();
    __isset.MyStringField2 = true;
  }

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;

  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();

  virtual ~MyStruct() throw() {}

  bool MyBoolField;
  int64_t MyIntField;
  std::string MyStringField;
  std::string MyStringField2;

  struct __isset {
    void __clear() {
      MyBoolField = false;
      MyIntField = false;
      MyStringField = false;
      MyStringField2 = false;
    }

    bool MyBoolField = false;
    bool MyIntField = false;
    bool MyStringField = false;
    bool MyStringField2 = false;
  } __isset;
  bool operator==(const MyStruct& rhs) const;

  bool operator < (const MyStruct& rhs) const {
    if (!(MyBoolField == rhs.MyBoolField)) {
      return MyBoolField < rhs.MyBoolField;
    }
    if (!(MyIntField == rhs.MyIntField)) {
      return MyIntField < rhs.MyIntField;
    }
    if (!(MyStringField == rhs.MyStringField)) {
      return MyStringField < rhs.MyStringField;
    }
    if (!(MyStringField2 == rhs.MyStringField2)) {
      return MyStringField2 < rhs.MyStringField2;
    }
    (void)rhs;
    return false;
  }

  bool get_MyBoolField() const {
    return MyBoolField;
  }

  bool& set_MyBoolField(bool MyBoolField_) {
    MyBoolField = MyBoolField_;
    __isset.MyBoolField = true;
    return MyBoolField;
  }

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }

  const std::string& get_MyStringField() const& {
    return MyStringField;
  }

  std::string get_MyStringField() && {
    return std::move(MyStringField);
  }

  template <typename T_MyStruct_MyStringField_struct_setter>
  std::string& set_MyStringField(T_MyStruct_MyStringField_struct_setter&& MyStringField_) {
    MyStringField = std::forward<T_MyStruct_MyStringField_struct_setter>(MyStringField_);
    __isset.MyStringField = true;
    return MyStringField;
  }

  const std::string& get_MyStringField2() const& {
    return MyStringField2;
  }

  std::string get_MyStringField2() && {
    return std::move(MyStringField2);
  }

  template <typename T_MyStruct_MyStringField2_struct_setter>
  std::string& set_MyStringField2(T_MyStruct_MyStringField2_struct_setter&& MyStringField2_) {
    MyStringField2 = std::forward<T_MyStruct_MyStringField2_struct_setter>(MyStringField2_);
    __isset.MyStringField2 = true;
    return MyStringField2;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(MyStruct& a, MyStruct& b);
extern template uint32_t MyStruct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyStruct>::clear( ::cpp2::MyStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::write(Protocol* proto,  ::cpp2::MyStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::read(Protocol* proto,  ::cpp2::MyStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSize(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2

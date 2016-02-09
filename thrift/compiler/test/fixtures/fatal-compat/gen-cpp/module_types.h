/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

#include <folly/json.h>

#include <folly/Range.h>

#include <folly/Conv.h>

#include <math.h>

#include <thrift/lib/cpp/Thrift.h>

using namespace folly::json;
namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}


namespace test_cpp1 { namespace cpp_reflection {

enum enum1 {
  field0 = 0,
  field1 = 1,
  field2 = 2
};

extern const std::map<int, const char*> _enum1_VALUES_TO_NAMES;

extern const std::map<const char*, int, apache::thrift::ltstr> _enum1_NAMES_TO_VALUES;

}} // namespace
namespace apache { namespace thrift { 
template<>
struct TEnumTraits< ::test_cpp1::cpp_reflection::enum1> : public TEnumTraitsBase< ::test_cpp1::cpp_reflection::enum1>
{
inline static constexpr  ::test_cpp1::cpp_reflection::enum1 min() {
return  ::test_cpp1::cpp_reflection::enum1::field0;
}
inline static constexpr  ::test_cpp1::cpp_reflection::enum1 max() {
return  ::test_cpp1::cpp_reflection::enum1::field2;
}
};
}} // apache:thrift

namespace test_cpp1 { namespace cpp_reflection {
enum enum2 {
  field0_2 = 0,
  field1_2 = 1,
  field2_2 = 2
};

extern const std::map<int, const char*> _enum2_VALUES_TO_NAMES;

extern const std::map<const char*, int, apache::thrift::ltstr> _enum2_NAMES_TO_VALUES;

}} // namespace
namespace apache { namespace thrift { 
template<>
struct TEnumTraits< ::test_cpp1::cpp_reflection::enum2> : public TEnumTraitsBase< ::test_cpp1::cpp_reflection::enum2>
{
inline static constexpr  ::test_cpp1::cpp_reflection::enum2 min() {
return  ::test_cpp1::cpp_reflection::enum2::field0_2;
}
inline static constexpr  ::test_cpp1::cpp_reflection::enum2 max() {
return  ::test_cpp1::cpp_reflection::enum2::field2_2;
}
};
}} // apache:thrift

namespace test_cpp1 { namespace cpp_reflection {
enum enum3 {
  field0_3 = 0,
  field1_3 = 1,
  field2_3 = 2
};

extern const std::map<int, const char*> _enum3_VALUES_TO_NAMES;

extern const std::map<const char*, int, apache::thrift::ltstr> _enum3_NAMES_TO_VALUES;

}} // namespace
namespace apache { namespace thrift { 
template<>
struct TEnumTraits< ::test_cpp1::cpp_reflection::enum3> : public TEnumTraitsBase< ::test_cpp1::cpp_reflection::enum3>
{
inline static constexpr  ::test_cpp1::cpp_reflection::enum3 min() {
return  ::test_cpp1::cpp_reflection::enum3::field0_3;
}
inline static constexpr  ::test_cpp1::cpp_reflection::enum3 max() {
return  ::test_cpp1::cpp_reflection::enum3::field2_3;
}
};
}} // apache:thrift

namespace test_cpp1 { namespace cpp_reflection {
class union1;

class union2;

class union3;

class structA;

class unionA;

class structB;

class structC;

class struct1;

class struct2;

class struct3;

class union1 : public apache::thrift::TStructType<union1> {
 public:
  enum class Type {
    __EMPTY__ = 0,
    ui = 1,
    ud = 2,
    us = 3,
    ue = 4,
  };

  union1() : type_(Type::__EMPTY__) {}
  union1(const union1& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::ui: {
        set_ui(rhs.value_.ui);
        break;
      }
      case Type::ud: {
        set_ud(rhs.value_.ud);
        break;
      }
      case Type::us: {
        set_us(rhs.value_.us);
        break;
      }
      case Type::ue: {
        set_ue(rhs.value_.ue);
        break;
      }
      default: assert(false);
    }
  }

  union1& operator=(const union1& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::ui: {
        set_ui(rhs.value_.ui);
        break;
      }
      case Type::ud: {
        set_ud(rhs.value_.ud);
        break;
      }
      case Type::us: {
        set_us(rhs.value_.us);
        break;
      }
      case Type::ue: {
        set_ue(rhs.value_.ue);
        break;
      }
      default: assert(false);
    }
    return *this;
  }

  union1(union1&& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::ui: {
        set_ui(std::move(rhs.value_.ui));
        break;
      }
      case Type::ud: {
        set_ud(std::move(rhs.value_.ud));
        break;
      }
      case Type::us: {
        set_us(std::move(rhs.value_.us));
        break;
      }
      case Type::ue: {
        set_ue(std::move(rhs.value_.ue));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
  }

  union1& operator=(union1&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::ui: {
        set_ui(std::move(rhs.value_.ui));
        break;
      }
      case Type::ud: {
        set_ud(std::move(rhs.value_.ud));
        break;
      }
      case Type::us: {
        set_us(std::move(rhs.value_.us));
        break;
      }
      case Type::ue: {
        set_ue(std::move(rhs.value_.ue));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
    return *this;
  }


  void __clear() {
    if (type_ == Type::__EMPTY__) { return; }
    switch (type_) {
      case Type::ui: {
        
        break;
      }
      case Type::ud: {
        
        break;
      }
      case Type::us: {
        using namespace std; value_.us.~string();
        break;
      }
      case Type::ue: {
        value_.ue.~enum1();
        break;
      }
      default: assert(false);
    }
    type_ = Type::__EMPTY__;
  }
  virtual ~union1() throw() {
    __clear();
  }

  union storage_type {
    int32_t ui;
    double ud;
    std::string us;
    enum1 ue;
    
    storage_type() {}
    ~storage_type() {}
  };

  bool operator==(const union1& rhs) const {
    if (type_ != rhs.type_) { return false; }
    switch (type_) {
      case Type::ui: {
        return value_.ui == rhs.value_.ui;

        break;
      }
      case Type::ud: {
        return value_.ud == rhs.value_.ud;

        break;
      }
      case Type::us: {
        return value_.us == rhs.value_.us;

        break;
      }
      case Type::ue: {
        return value_.ue == rhs.value_.ue;

        break;
      }
      default: return true;
    }
  }

  bool operator!=(const union1& rhs) const {
    return !(*this == rhs);
  }

  bool operator<(const union1& rhs) const {
    if (type_ != rhs.type_) return type_ < rhs.type_;
    switch (type_) {
      case Type::ui: {
        return value_.ui < rhs.value_.ui;

        break;
      }
      case Type::ud: {
        return value_.ud < rhs.value_.ud;

        break;
      }
      case Type::us: {
        return value_.us < rhs.value_.us;

        break;
      }
      case Type::ue: {
        return value_.ue < rhs.value_.ue;

        break;
      }
      default: return false;
    }
    return false;
  }

  template<typename... T>
  void set_ui(T&&... t) {
    __clear();
    type_ = Type::ui;
    new (&value_.ui) int32_t(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_ud(T&&... t) {
    __clear();
    type_ = Type::ud;
    new (&value_.ud) double(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_us(T&&... t) {
    __clear();
    type_ = Type::us;
    new (&value_.us) std::string(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_ue(T&&... t) {
    __clear();
    type_ = Type::ue;
    new (&value_.ue) enum1(std::forward<T>(t)...);
  }

  const int32_t& get_ui() const {
    assert(type_ == Type::ui);
    return value_.ui;
  }

  const double& get_ud() const {
    assert(type_ == Type::ud);
    return value_.ud;
  }

  const std::string& get_us() const {
    assert(type_ == Type::us);
    return value_.us;
  }

  const enum1& get_ue() const {
    assert(type_ == Type::ue);
    return value_.ue;
  }

  int32_t& mutable_ui() {
    assert(type_ == Type::ui);
    return value_.ui;
  }

  double& mutable_ud() {
    assert(type_ == Type::ud);
    return value_.ud;
  }

  std::string& mutable_us() {
    assert(type_ == Type::us);
    return value_.us;
  }

  enum1& mutable_ue() {
    assert(type_ == Type::ue);
    return value_.ue;
  }

  int32_t move_ui() {
    assert(type_ == Type::ui);
    return std::move(value_.ui);
  }

  double move_ud() {
    assert(type_ == Type::ud);
    return std::move(value_.ud);
  }

  std::string move_us() {
    assert(type_ == Type::us);
    return std::move(value_.us);
  }

  enum1 move_ue() {
    assert(type_ == Type::ue);
    return std::move(value_.ue);
  }

  Type getType() const { return type_; }

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;
 private:
  Type type_;
  storage_type value_;

};

class union2 : public apache::thrift::TStructType<union2> {
 public:
  enum class Type {
    __EMPTY__ = 0,
    ui_2 = 1,
    ud_2 = 2,
    us_2 = 3,
    ue_2 = 4,
  };

  union2() : type_(Type::__EMPTY__) {}
  union2(const union2& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::ui_2: {
        set_ui_2(rhs.value_.ui_2);
        break;
      }
      case Type::ud_2: {
        set_ud_2(rhs.value_.ud_2);
        break;
      }
      case Type::us_2: {
        set_us_2(rhs.value_.us_2);
        break;
      }
      case Type::ue_2: {
        set_ue_2(rhs.value_.ue_2);
        break;
      }
      default: assert(false);
    }
  }

  union2& operator=(const union2& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::ui_2: {
        set_ui_2(rhs.value_.ui_2);
        break;
      }
      case Type::ud_2: {
        set_ud_2(rhs.value_.ud_2);
        break;
      }
      case Type::us_2: {
        set_us_2(rhs.value_.us_2);
        break;
      }
      case Type::ue_2: {
        set_ue_2(rhs.value_.ue_2);
        break;
      }
      default: assert(false);
    }
    return *this;
  }

  union2(union2&& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::ui_2: {
        set_ui_2(std::move(rhs.value_.ui_2));
        break;
      }
      case Type::ud_2: {
        set_ud_2(std::move(rhs.value_.ud_2));
        break;
      }
      case Type::us_2: {
        set_us_2(std::move(rhs.value_.us_2));
        break;
      }
      case Type::ue_2: {
        set_ue_2(std::move(rhs.value_.ue_2));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
  }

  union2& operator=(union2&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::ui_2: {
        set_ui_2(std::move(rhs.value_.ui_2));
        break;
      }
      case Type::ud_2: {
        set_ud_2(std::move(rhs.value_.ud_2));
        break;
      }
      case Type::us_2: {
        set_us_2(std::move(rhs.value_.us_2));
        break;
      }
      case Type::ue_2: {
        set_ue_2(std::move(rhs.value_.ue_2));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
    return *this;
  }


  void __clear() {
    if (type_ == Type::__EMPTY__) { return; }
    switch (type_) {
      case Type::ui_2: {
        
        break;
      }
      case Type::ud_2: {
        
        break;
      }
      case Type::us_2: {
        using namespace std; value_.us_2.~string();
        break;
      }
      case Type::ue_2: {
        value_.ue_2.~enum1();
        break;
      }
      default: assert(false);
    }
    type_ = Type::__EMPTY__;
  }
  virtual ~union2() throw() {
    __clear();
  }

  union storage_type {
    int32_t ui_2;
    double ud_2;
    std::string us_2;
    enum1 ue_2;
    
    storage_type() {}
    ~storage_type() {}
  };

  bool operator==(const union2& rhs) const {
    if (type_ != rhs.type_) { return false; }
    switch (type_) {
      case Type::ui_2: {
        return value_.ui_2 == rhs.value_.ui_2;

        break;
      }
      case Type::ud_2: {
        return value_.ud_2 == rhs.value_.ud_2;

        break;
      }
      case Type::us_2: {
        return value_.us_2 == rhs.value_.us_2;

        break;
      }
      case Type::ue_2: {
        return value_.ue_2 == rhs.value_.ue_2;

        break;
      }
      default: return true;
    }
  }

  bool operator!=(const union2& rhs) const {
    return !(*this == rhs);
  }

  bool operator<(const union2& rhs) const {
    if (type_ != rhs.type_) return type_ < rhs.type_;
    switch (type_) {
      case Type::ui_2: {
        return value_.ui_2 < rhs.value_.ui_2;

        break;
      }
      case Type::ud_2: {
        return value_.ud_2 < rhs.value_.ud_2;

        break;
      }
      case Type::us_2: {
        return value_.us_2 < rhs.value_.us_2;

        break;
      }
      case Type::ue_2: {
        return value_.ue_2 < rhs.value_.ue_2;

        break;
      }
      default: return false;
    }
    return false;
  }

  template<typename... T>
  void set_ui_2(T&&... t) {
    __clear();
    type_ = Type::ui_2;
    new (&value_.ui_2) int32_t(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_ud_2(T&&... t) {
    __clear();
    type_ = Type::ud_2;
    new (&value_.ud_2) double(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_us_2(T&&... t) {
    __clear();
    type_ = Type::us_2;
    new (&value_.us_2) std::string(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_ue_2(T&&... t) {
    __clear();
    type_ = Type::ue_2;
    new (&value_.ue_2) enum1(std::forward<T>(t)...);
  }

  const int32_t& get_ui_2() const {
    assert(type_ == Type::ui_2);
    return value_.ui_2;
  }

  const double& get_ud_2() const {
    assert(type_ == Type::ud_2);
    return value_.ud_2;
  }

  const std::string& get_us_2() const {
    assert(type_ == Type::us_2);
    return value_.us_2;
  }

  const enum1& get_ue_2() const {
    assert(type_ == Type::ue_2);
    return value_.ue_2;
  }

  int32_t& mutable_ui_2() {
    assert(type_ == Type::ui_2);
    return value_.ui_2;
  }

  double& mutable_ud_2() {
    assert(type_ == Type::ud_2);
    return value_.ud_2;
  }

  std::string& mutable_us_2() {
    assert(type_ == Type::us_2);
    return value_.us_2;
  }

  enum1& mutable_ue_2() {
    assert(type_ == Type::ue_2);
    return value_.ue_2;
  }

  int32_t move_ui_2() {
    assert(type_ == Type::ui_2);
    return std::move(value_.ui_2);
  }

  double move_ud_2() {
    assert(type_ == Type::ud_2);
    return std::move(value_.ud_2);
  }

  std::string move_us_2() {
    assert(type_ == Type::us_2);
    return std::move(value_.us_2);
  }

  enum1 move_ue_2() {
    assert(type_ == Type::ue_2);
    return std::move(value_.ue_2);
  }

  Type getType() const { return type_; }

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;
 private:
  Type type_;
  storage_type value_;

};

class union3 : public apache::thrift::TStructType<union3> {
 public:
  enum class Type {
    __EMPTY__ = 0,
    ui_3 = 1,
    ud_3 = 2,
    us_3 = 3,
    ue_3 = 4,
  };

  union3() : type_(Type::__EMPTY__) {}
  union3(const union3& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::ui_3: {
        set_ui_3(rhs.value_.ui_3);
        break;
      }
      case Type::ud_3: {
        set_ud_3(rhs.value_.ud_3);
        break;
      }
      case Type::us_3: {
        set_us_3(rhs.value_.us_3);
        break;
      }
      case Type::ue_3: {
        set_ue_3(rhs.value_.ue_3);
        break;
      }
      default: assert(false);
    }
  }

  union3& operator=(const union3& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::ui_3: {
        set_ui_3(rhs.value_.ui_3);
        break;
      }
      case Type::ud_3: {
        set_ud_3(rhs.value_.ud_3);
        break;
      }
      case Type::us_3: {
        set_us_3(rhs.value_.us_3);
        break;
      }
      case Type::ue_3: {
        set_ue_3(rhs.value_.ue_3);
        break;
      }
      default: assert(false);
    }
    return *this;
  }

  union3(union3&& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::ui_3: {
        set_ui_3(std::move(rhs.value_.ui_3));
        break;
      }
      case Type::ud_3: {
        set_ud_3(std::move(rhs.value_.ud_3));
        break;
      }
      case Type::us_3: {
        set_us_3(std::move(rhs.value_.us_3));
        break;
      }
      case Type::ue_3: {
        set_ue_3(std::move(rhs.value_.ue_3));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
  }

  union3& operator=(union3&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::ui_3: {
        set_ui_3(std::move(rhs.value_.ui_3));
        break;
      }
      case Type::ud_3: {
        set_ud_3(std::move(rhs.value_.ud_3));
        break;
      }
      case Type::us_3: {
        set_us_3(std::move(rhs.value_.us_3));
        break;
      }
      case Type::ue_3: {
        set_ue_3(std::move(rhs.value_.ue_3));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
    return *this;
  }


  void __clear() {
    if (type_ == Type::__EMPTY__) { return; }
    switch (type_) {
      case Type::ui_3: {
        
        break;
      }
      case Type::ud_3: {
        
        break;
      }
      case Type::us_3: {
        using namespace std; value_.us_3.~string();
        break;
      }
      case Type::ue_3: {
        value_.ue_3.~enum1();
        break;
      }
      default: assert(false);
    }
    type_ = Type::__EMPTY__;
  }
  virtual ~union3() throw() {
    __clear();
  }

  union storage_type {
    int32_t ui_3;
    double ud_3;
    std::string us_3;
    enum1 ue_3;
    
    storage_type() {}
    ~storage_type() {}
  };

  bool operator==(const union3& rhs) const {
    if (type_ != rhs.type_) { return false; }
    switch (type_) {
      case Type::ui_3: {
        return value_.ui_3 == rhs.value_.ui_3;

        break;
      }
      case Type::ud_3: {
        return value_.ud_3 == rhs.value_.ud_3;

        break;
      }
      case Type::us_3: {
        return value_.us_3 == rhs.value_.us_3;

        break;
      }
      case Type::ue_3: {
        return value_.ue_3 == rhs.value_.ue_3;

        break;
      }
      default: return true;
    }
  }

  bool operator!=(const union3& rhs) const {
    return !(*this == rhs);
  }

  bool operator<(const union3& rhs) const {
    if (type_ != rhs.type_) return type_ < rhs.type_;
    switch (type_) {
      case Type::ui_3: {
        return value_.ui_3 < rhs.value_.ui_3;

        break;
      }
      case Type::ud_3: {
        return value_.ud_3 < rhs.value_.ud_3;

        break;
      }
      case Type::us_3: {
        return value_.us_3 < rhs.value_.us_3;

        break;
      }
      case Type::ue_3: {
        return value_.ue_3 < rhs.value_.ue_3;

        break;
      }
      default: return false;
    }
    return false;
  }

  template<typename... T>
  void set_ui_3(T&&... t) {
    __clear();
    type_ = Type::ui_3;
    new (&value_.ui_3) int32_t(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_ud_3(T&&... t) {
    __clear();
    type_ = Type::ud_3;
    new (&value_.ud_3) double(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_us_3(T&&... t) {
    __clear();
    type_ = Type::us_3;
    new (&value_.us_3) std::string(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_ue_3(T&&... t) {
    __clear();
    type_ = Type::ue_3;
    new (&value_.ue_3) enum1(std::forward<T>(t)...);
  }

  const int32_t& get_ui_3() const {
    assert(type_ == Type::ui_3);
    return value_.ui_3;
  }

  const double& get_ud_3() const {
    assert(type_ == Type::ud_3);
    return value_.ud_3;
  }

  const std::string& get_us_3() const {
    assert(type_ == Type::us_3);
    return value_.us_3;
  }

  const enum1& get_ue_3() const {
    assert(type_ == Type::ue_3);
    return value_.ue_3;
  }

  int32_t& mutable_ui_3() {
    assert(type_ == Type::ui_3);
    return value_.ui_3;
  }

  double& mutable_ud_3() {
    assert(type_ == Type::ud_3);
    return value_.ud_3;
  }

  std::string& mutable_us_3() {
    assert(type_ == Type::us_3);
    return value_.us_3;
  }

  enum1& mutable_ue_3() {
    assert(type_ == Type::ue_3);
    return value_.ue_3;
  }

  int32_t move_ui_3() {
    assert(type_ == Type::ui_3);
    return std::move(value_.ui_3);
  }

  double move_ud_3() {
    assert(type_ == Type::ud_3);
    return std::move(value_.ud_3);
  }

  std::string move_us_3() {
    assert(type_ == Type::us_3);
    return std::move(value_.us_3);
  }

  enum1 move_ue_3() {
    assert(type_ == Type::ue_3);
    return std::move(value_.ue_3);
  }

  Type getType() const { return type_; }

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;
 private:
  Type type_;
  storage_type value_;

};

void swap(structA &a, structA &b);

class structA : public apache::thrift::TStructType<structA> {
 public:

  static const uint64_t _reflection_id = 9663308154247018828U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  structA() : a(0) {
  }

  structA(const structA&) = default;
  structA& operator=(const structA& src)= default;
  structA(structA&&) = default;
  structA& operator=(structA&&) = default;

  void __clear();

  virtual ~structA() throw() {}

  int32_t a;
  std::string b;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      a = false;
      b = false;
    }
    bool a;
    bool b;
  } __isset;

  bool operator == (const structA &) const;
  bool operator != (const structA& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const structA & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class structA;
void merge(const structA& from, structA& to);
void merge(structA&& from, structA& to);
class unionA : public apache::thrift::TStructType<unionA> {
 public:
  enum class Type {
    __EMPTY__ = 0,
    i = 1,
    d = 2,
    s = 3,
    e = 4,
    a = 5,
  };

  unionA() : type_(Type::__EMPTY__) {}
  unionA(const unionA& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i: {
        set_i(rhs.value_.i);
        break;
      }
      case Type::d: {
        set_d(rhs.value_.d);
        break;
      }
      case Type::s: {
        set_s(rhs.value_.s);
        break;
      }
      case Type::e: {
        set_e(rhs.value_.e);
        break;
      }
      case Type::a: {
        set_a(rhs.value_.a);
        break;
      }
      default: assert(false);
    }
  }

  unionA& operator=(const unionA& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i: {
        set_i(rhs.value_.i);
        break;
      }
      case Type::d: {
        set_d(rhs.value_.d);
        break;
      }
      case Type::s: {
        set_s(rhs.value_.s);
        break;
      }
      case Type::e: {
        set_e(rhs.value_.e);
        break;
      }
      case Type::a: {
        set_a(rhs.value_.a);
        break;
      }
      default: assert(false);
    }
    return *this;
  }

  unionA(unionA&& rhs) : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i: {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::d: {
        set_d(std::move(rhs.value_.d));
        break;
      }
      case Type::s: {
        set_s(std::move(rhs.value_.s));
        break;
      }
      case Type::e: {
        set_e(std::move(rhs.value_.e));
        break;
      }
      case Type::a: {
        set_a(std::move(rhs.value_.a));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
  }

  unionA& operator=(unionA&& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i: {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::d: {
        set_d(std::move(rhs.value_.d));
        break;
      }
      case Type::s: {
        set_s(std::move(rhs.value_.s));
        break;
      }
      case Type::e: {
        set_e(std::move(rhs.value_.e));
        break;
      }
      case Type::a: {
        set_a(std::move(rhs.value_.a));
        break;
      }
      default: assert(false);
    }
    rhs.__clear();
    return *this;
  }


  void __clear() {
    if (type_ == Type::__EMPTY__) { return; }
    switch (type_) {
      case Type::i: {
        
        break;
      }
      case Type::d: {
        
        break;
      }
      case Type::s: {
        using namespace std; value_.s.~string();
        break;
      }
      case Type::e: {
        value_.e.~enum1();
        break;
      }
      case Type::a: {
        value_.a.~structA();
        break;
      }
      default: assert(false);
    }
    type_ = Type::__EMPTY__;
  }
  virtual ~unionA() throw() {
    __clear();
  }

  union storage_type {
    int32_t i;
    double d;
    std::string s;
    enum1 e;
    structA a;
    
    storage_type() {}
    ~storage_type() {}
  };

  bool operator==(const unionA& rhs) const {
    if (type_ != rhs.type_) { return false; }
    switch (type_) {
      case Type::i: {
        return value_.i == rhs.value_.i;

        break;
      }
      case Type::d: {
        return value_.d == rhs.value_.d;

        break;
      }
      case Type::s: {
        return value_.s == rhs.value_.s;

        break;
      }
      case Type::e: {
        return value_.e == rhs.value_.e;

        break;
      }
      case Type::a: {
        return value_.a == rhs.value_.a;

        break;
      }
      default: return true;
    }
  }

  bool operator!=(const unionA& rhs) const {
    return !(*this == rhs);
  }

  bool operator<(const unionA& rhs) const {
    if (type_ != rhs.type_) return type_ < rhs.type_;
    switch (type_) {
      case Type::i: {
        return value_.i < rhs.value_.i;

        break;
      }
      case Type::d: {
        return value_.d < rhs.value_.d;

        break;
      }
      case Type::s: {
        return value_.s < rhs.value_.s;

        break;
      }
      case Type::e: {
        return value_.e < rhs.value_.e;

        break;
      }
      case Type::a: {
        return value_.a < rhs.value_.a;

        break;
      }
      default: return false;
    }
    return false;
  }

  template<typename... T>
  void set_i(T&&... t) {
    __clear();
    type_ = Type::i;
    new (&value_.i) int32_t(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_d(T&&... t) {
    __clear();
    type_ = Type::d;
    new (&value_.d) double(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_s(T&&... t) {
    __clear();
    type_ = Type::s;
    new (&value_.s) std::string(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_e(T&&... t) {
    __clear();
    type_ = Type::e;
    new (&value_.e) enum1(std::forward<T>(t)...);
  }

  template<typename... T>
  void set_a(T&&... t) {
    __clear();
    type_ = Type::a;
    new (&value_.a) structA(std::forward<T>(t)...);
  }

  const int32_t& get_i() const {
    assert(type_ == Type::i);
    return value_.i;
  }

  const double& get_d() const {
    assert(type_ == Type::d);
    return value_.d;
  }

  const std::string& get_s() const {
    assert(type_ == Type::s);
    return value_.s;
  }

  const enum1& get_e() const {
    assert(type_ == Type::e);
    return value_.e;
  }

  const structA& get_a() const {
    assert(type_ == Type::a);
    return value_.a;
  }

  int32_t& mutable_i() {
    assert(type_ == Type::i);
    return value_.i;
  }

  double& mutable_d() {
    assert(type_ == Type::d);
    return value_.d;
  }

  std::string& mutable_s() {
    assert(type_ == Type::s);
    return value_.s;
  }

  enum1& mutable_e() {
    assert(type_ == Type::e);
    return value_.e;
  }

  structA& mutable_a() {
    assert(type_ == Type::a);
    return value_.a;
  }

  int32_t move_i() {
    assert(type_ == Type::i);
    return std::move(value_.i);
  }

  double move_d() {
    assert(type_ == Type::d);
    return std::move(value_.d);
  }

  std::string move_s() {
    assert(type_ == Type::s);
    return std::move(value_.s);
  }

  enum1 move_e() {
    assert(type_ == Type::e);
    return std::move(value_.e);
  }

  structA move_a() {
    assert(type_ == Type::a);
    return std::move(value_.a);
  }

  Type getType() const { return type_; }

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;
 private:
  Type type_;
  storage_type value_;

};

void swap(structB &a, structB &b);

class structB : public apache::thrift::TStructType<structB> {
 public:

  static const uint64_t _reflection_id = 10239267202130913964U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  structB() : c(0), d(0) {
  }

  structB(const structB&) = default;
  structB& operator=(const structB& src)= default;
  structB(structB&&) = default;
  structB& operator=(structB&&) = default;

  void __clear();

  virtual ~structB() throw() {}

  double c;
  bool d;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      c = false;
      d = false;
    }
    bool c;
    bool d;
  } __isset;

  bool operator == (const structB &) const;
  bool operator != (const structB& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const structB & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class structB;
void merge(const structB& from, structB& to);
void merge(structB&& from, structB& to);
void swap(structC &a, structC &b);

class structC : public apache::thrift::TStructType<structC> {
 public:

  static const uint64_t _reflection_id = 18130273386912691148U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  structC() : a(0), c(0), d(0), e(static_cast<enum1>(0)), f(static_cast<enum2>(0)) {
  }

  structC(const structC&) = default;
  structC& operator=(const structC& src)= default;
  structC(structC&&) = default;
  structC& operator=(structC&&) = default;

  void __clear();

  virtual ~structC() throw() {}

  int32_t a;
  std::string b;
  double c;
  bool d;
  enum1 e;
  enum2 f;
  union1 g;
  unionA h;
  unionA i;
  std::vector<int32_t>  j;
  std::vector<int32_t>  j1;
  std::vector<enum1>  j2;
  std::vector<structA>  j3;
  std::set<int32_t>  k;
  std::set<int32_t>  k1;
  std::set<enum2>  k2;
  std::set<structB>  k3;
  std::map<int32_t, int32_t>  l;
  std::map<int32_t, int32_t>  l1;
  std::map<int32_t, enum1>  l2;
  std::map<int32_t, structB>  l3;
  std::map<enum1, int32_t>  m1;
  std::map<enum1, enum2>  m2;
  std::map<enum1, structB>  m3;
  std::map<std::string, int32_t>  n1;
  std::map<std::string, enum1>  n2;
  std::map<std::string, structB>  n3;
  std::map<structA, int32_t>  o1;
  std::map<structA, enum1>  o2;
  std::map<structA, structB>  o3;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      a = false;
      b = false;
      c = false;
      d = false;
      e = false;
      f = false;
      g = false;
      h = false;
      i = false;
      j = false;
      j1 = false;
      j2 = false;
      j3 = false;
      k = false;
      k1 = false;
      k2 = false;
      k3 = false;
      l = false;
      l1 = false;
      l2 = false;
      l3 = false;
      m1 = false;
      m2 = false;
      m3 = false;
      n1 = false;
      n2 = false;
      n3 = false;
      o1 = false;
      o2 = false;
      o3 = false;
    }
    bool a;
    bool b;
    bool c;
    bool d;
    bool e;
    bool f;
    bool g;
    bool h;
    bool i;
    bool j;
    bool j1;
    bool j2;
    bool j3;
    bool k;
    bool k1;
    bool k2;
    bool k3;
    bool l;
    bool l1;
    bool l2;
    bool l3;
    bool m1;
    bool m2;
    bool m3;
    bool n1;
    bool n2;
    bool n3;
    bool o1;
    bool o2;
    bool o3;
  } __isset;

  bool operator == (const structC &) const;
  bool operator != (const structC& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const structC & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class structC;
void merge(const structC& from, structC& to);
void merge(structC&& from, structC& to);
void swap(struct1 &a, struct1 &b);

class struct1 : public apache::thrift::TStructType<struct1> {
 public:

  static const uint64_t _reflection_id = 18317194148543753228U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  struct1() : field0(0), field2(static_cast<enum1>(0)), field3(static_cast<enum2>(0)) {
  }

  struct1(const struct1&) = default;
  struct1& operator=(const struct1& src)= default;
  struct1(struct1&&) = default;
  struct1& operator=(struct1&&) = default;

  void __clear();

  virtual ~struct1() throw() {}

  int32_t field0;
  std::string field1;
  enum1 field2;
  enum2 field3;
  union1 field4;
  union2 field5;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      field1 = false;
      field2 = false;
      field4 = false;
      field5 = false;
    }
    bool field1;
    bool field2;
    bool field4;
    bool field5;
  } __isset;

  bool operator == (const struct1 &) const;
  bool operator != (const struct1& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const struct1 & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class struct1;
void merge(const struct1& from, struct1& to);
void merge(struct1&& from, struct1& to);
void swap(struct2 &a, struct2 &b);

class struct2 : public apache::thrift::TStructType<struct2> {
 public:

  static const uint64_t _reflection_id = 13919930284671800588U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  struct2() : fieldA(0), fieldC(static_cast<enum1>(0)), fieldD(static_cast<enum2>(0)) {
  }

  struct2(const struct2&) = default;
  struct2& operator=(const struct2& src)= default;
  struct2(struct2&&) = default;
  struct2& operator=(struct2&&) = default;

  void __clear();

  virtual ~struct2() throw() {}

  int32_t fieldA;
  std::string fieldB;
  enum1 fieldC;
  enum2 fieldD;
  union1 fieldE;
  union2 fieldF;
  struct1 fieldG;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      fieldA = false;
      fieldB = false;
      fieldC = false;
      fieldD = false;
      fieldE = false;
      fieldF = false;
      fieldG = false;
    }
    bool fieldA;
    bool fieldB;
    bool fieldC;
    bool fieldD;
    bool fieldE;
    bool fieldF;
    bool fieldG;
  } __isset;

  bool operator == (const struct2 &) const;
  bool operator != (const struct2& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const struct2 & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class struct2;
void merge(const struct2& from, struct2& to);
void merge(struct2&& from, struct2& to);
void swap(struct3 &a, struct3 &b);

class struct3 : public apache::thrift::TStructType<struct3> {
 public:

  static const uint64_t _reflection_id = 16392874475279945260U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  struct3() : fieldA(0), fieldC(static_cast<enum1>(0)), fieldD(static_cast<enum2>(0)) {
  }

  struct3(const struct3&) = default;
  struct3& operator=(const struct3& src)= default;
  struct3(struct3&&) = default;
  struct3& operator=(struct3&&) = default;

  void __clear();

  virtual ~struct3() throw() {}

  int32_t fieldA;
  std::string fieldB;
  enum1 fieldC;
  enum2 fieldD;
  union1 fieldE;
  union2 fieldF;
  struct1 fieldG;
  union2 fieldH;
  std::vector<int32_t>  fieldI;
  std::vector<std::string>  fieldJ;
  std::vector<std::string>  fieldK;
  std::vector<structA>  fieldL;
  std::set<int32_t>  fieldM;
  std::set<std::string>  fieldN;
  std::set<std::string>  fieldO;
  std::set<structB>  fieldP;
  std::map<std::string, structA>  fieldQ;
  std::map<std::string, structB>  fieldR;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      fieldA = false;
      fieldB = false;
      fieldC = false;
      fieldD = false;
      fieldE = false;
      fieldF = false;
      fieldG = false;
      fieldH = false;
      fieldI = false;
      fieldJ = false;
      fieldK = false;
      fieldL = false;
      fieldM = false;
      fieldN = false;
      fieldO = false;
      fieldP = false;
      fieldQ = false;
      fieldR = false;
    }
    bool fieldA;
    bool fieldB;
    bool fieldC;
    bool fieldD;
    bool fieldE;
    bool fieldF;
    bool fieldG;
    bool fieldH;
    bool fieldI;
    bool fieldJ;
    bool fieldK;
    bool fieldL;
    bool fieldM;
    bool fieldN;
    bool fieldO;
    bool fieldP;
    bool fieldQ;
    bool fieldR;
  } __isset;

  bool operator == (const struct3 &) const;
  bool operator != (const struct3& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const struct3 & ) const;

  void readFromJson(const char* jsonText, size_t len);
  void readFromJson(const char* jsonText);
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class struct3;
void merge(const struct3& from, struct3& to);
void merge(struct3&& from, struct3& to);
}} // namespace

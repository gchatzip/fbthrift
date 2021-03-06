/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/ExtendTestService.h>
#include <gen-py3/hsmodule/services_wrapper.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class ExtendTestServiceWrapper : virtual public cpp2::HsTestServiceWrapper, virtual public ExtendTestServiceSvIf {
  public:
    explicit ExtendTestServiceWrapper(PyObject *if_object);
    folly::Future<bool> future_check(
        std::unique_ptr<cpp2::HsFoo> struct1
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> ExtendTestServiceInterface(PyObject *if_object);
} // namespace cpp2

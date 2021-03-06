/*******************************************************************************
    Copyright (c) The Taichi Authors (2016- ). All Rights Reserved.
    The use of this software is governed by the LICENSE file.
*******************************************************************************/

#include <taichi/common/util.h>
#include <taichi/common/task.h>
#include <taichi/math/array.h>

TC_NAMESPACE_BEGIN

class TestArray : public Task {
  virtual void run(const std::vector<std::string> &parameters) {
    using Array = Array2D<real>;
    Array A(Vector2i(5, 6));
    Array B(A);
    TC_P(A.get_res());
    TC_P(B.get_res());
  }
};

TC_IMPLEMENTATION(Task, TestArray, "test_array")

TC_NAMESPACE_END

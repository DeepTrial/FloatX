
#ifndef FLOATX_DTYPE_HPP_
#define FLOATX_DTYPE_HPP_

#include <floatx.hpp>

using namespace flx;

namespace FLOAT_DTYPE {
// 64bit float, same as C/C++ double
using float64 = flx::floatx<11, 52>;

// 32bit float, same as C/C++ float
using float32 = flx::floatx<8, 23>;

// 16bit float
using float16 = flx::floatx<5, 10>;
using bfloat16 = flx::floatx<8, 7>;

// 8bit float
using float8_e4m3 = flx::floatx<4, 3>;
using float8_e5m2 = flx::floatx<5, 2>;
};  // namespace FLOAT_DTYPE

#endif  // FLOATX_DTYPE_HPP_
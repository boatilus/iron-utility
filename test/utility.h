#pragma once

#include "../utility.h"


//////////////////////
// is_integral_like //
//////////////////////

static_assert(
  true == iron::is_integral_like<int8_t>::value,
  "an int should be an integral-like value"
);

static_assert(
  true == iron::is_integral_like<int16_t>::value,
  "an int should be an integral-like value"
);

static_assert(
  true == iron::is_integral_like<int>::value,
  "an int should be an integral-like value"
);

static_assert(
  false == iron::is_integral_like<float>::value,
  "a float should not be an integral-like value"
);
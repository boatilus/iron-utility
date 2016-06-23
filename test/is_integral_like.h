/*
 CC0 1.0 Universal (CC0 1.0)
 Public Domain Dedication
 
 The person who associated a work with this deed has dedicated the work to the public domain by
 waiving all of his or her rights to the work worldwide under copyright law, including all related
 and neighboring rights, to the extent allowed by law.
 
 You can copy, modify, distribute and perform the work, even for commercial purposes, all without
 asking permission.
 
 https://creativecommons.org/publicdomain/zero/1.0/
*/


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
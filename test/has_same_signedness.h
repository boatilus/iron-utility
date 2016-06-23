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


/////////////////////////
// has_same_signedness //
/////////////////////////

static_assert(
  true == iron::has_same_signedness<int8_t, int8_t>::value,
  "int8_t and int8_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int8_t, int16_t>::value,
  "int8_t and int16_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int8_t, int32_t>::value,
  "int8_t and int32_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int8_t, int64_t>::value,
  "int8_t and int64_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int16_t, int8_t>::value,
  "int16_t and int8_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int16_t, int16_t>::value,
  "int16_t and int16_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int16_t, int32_t>::value,
  "int16_t and int32_t should have the same signedness"
);

static_assert(
  true == iron::has_same_signedness<int16_t, int64_t>::value,
  "int16_t and int64_t should have the same signedness"
);
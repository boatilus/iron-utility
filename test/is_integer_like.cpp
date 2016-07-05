#include "../lib/catch.h"
#include "../utility.h"


TEST_CASE("all built-in integers are integral-like") {
  using namespace iron;

  REQUIRE(is_integer_like<int8_t>::value);
  REQUIRE(is_integer_like<int16_t>::value);
  REQUIRE(is_integer_like<int32_t>::value);
  REQUIRE(is_integer_like<int64_t>::value);
  REQUIRE(is_integer_like<uint8_t>::value);
  REQUIRE(is_integer_like<uint16_t>::value);
  REQUIRE(is_integer_like<uint32_t>::value);
  REQUIRE(is_integer_like<uint64_t>::value);
}

TEST_CASE("floats aren't integral-like") {
  using namespace iron;

  REQUIRE(!is_integer_like<float>::value);
  REQUIRE(!is_integer_like<double>::value);
}
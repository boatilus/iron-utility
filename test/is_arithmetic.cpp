#include "../lib/catch.h"
#include "../utility.h"


TEST_CASE("all_arithmetic type trait has true value with arithmetic types") {
  using namespace iron;
  
  REQUIRE(all_arithmetic<int8_t>::value);
  REQUIRE((all_arithmetic<int8_t, int16_t>::value));
  REQUIRE((all_arithmetic<int8_t, int16_t, int32_t>::value));
  REQUIRE((all_arithmetic<int8_t, int16_t, int32_t, int64_t, uint8_t, uint16_t,
                          uint32_t, uint64_t>::value));
}

TEST_CASE("all_arithmetic type trait has false value if any/all non-arithmetic TPs") {
  REQUIRE(!(iron::all_arithmetic<int8_t, char*>::value));
  REQUIRE(!(iron::all_arithmetic<char*, std::function<char>>::value));
}

TEST_CASE("all_integral type trait has true value with integral types") {
  using namespace iron;
  
  REQUIRE(all_integral<int8_t>::value);
  REQUIRE((all_integral<int8_t, int16_t>::value));
  REQUIRE((all_integral<int8_t, int16_t, int32_t>::value));
  REQUIRE((all_arithmetic<int8_t, int16_t, int32_t, int64_t, uint8_t, uint16_t,
                          uint32_t, uint64_t>::value));
}

TEST_CASE("all_integral type trait has false value if any/all non-arithmetic TPs") {
  REQUIRE(!(iron::all_integral<int8_t, char*>::value));
  REQUIRE(!(iron::all_integral<char*, std::function<char>>::value));
}

TEST_CASE("all_signed type trait has true value with signed integral types") {
  using namespace iron;
  
  REQUIRE(all_signed<int8_t>::value);
  REQUIRE((all_signed<int8_t, int16_t>::value));
  REQUIRE((all_signed<int8_t, int16_t, int32_t>::value));
  REQUIRE((all_signed<int8_t, int16_t, int32_t, int64_t>::value));
}

TEST_CASE("all_signed type trait has false value if any/all non-arithmetic TPs") {
  REQUIRE(!(iron::all_signed<int8_t, char*>::value));
  REQUIRE(!(iron::all_signed<char*, std::function<char>>::value));
}

TEST_CASE("all_unsigned type trait has true value with signed integral types") {
  using namespace iron;
  
  REQUIRE(all_unsigned<uint8_t>::value);
  REQUIRE((all_unsigned<uint8_t, uint16_t>::value));
  REQUIRE((all_unsigned<uint8_t, uint16_t, uint32_t>::value));
  REQUIRE((all_unsigned<uint8_t, uint16_t, uint32_t, uint64_t>::value));
}

TEST_CASE("all_unsigned type trait has false value if any/all non-arithmetic TPs") {
  REQUIRE(!(iron::all_unsigned<uint8_t, char*>::value));
  REQUIRE(!(iron::all_integral<char*, std::function<char>>::value));
}

TEST_CASE("all_floating_point type trait has true value with FP types") {
  using namespace iron;
  
  REQUIRE(all_floating_point<float>::value);
  REQUIRE((all_floating_point<float, double>::value));
}

TEST_CASE("all_floating_point type trait has false value if any/all non-arithmetic TPs") {
  REQUIRE(!(iron::all_unsigned<float, char*>::value));
  REQUIRE(!(iron::all_integral<char*, std::function<char>>::value));
}
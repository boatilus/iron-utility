#include <string>

#include "../lib/catch.h"
#include "../utility.h"


TEST_CASE("has_char_traits sets true value for std::string") {
  using namespace iron;
  
  REQUIRE((has_char_traits<std::string, std::char_traits<char>>::value));
}
#include "Aggregator.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Created aggregator is empty", "[aggregator]") {
  swo::Aggregator a;
  REQUIRE(a.getSum() == 0);
}

TEST_CASE("Aggregator accumulates added values", "[aggregator]") {
  swo::Aggregator a;
  a.collect({1, 2, 3, 4});
  REQUIRE(a.getSum() == 10);
}

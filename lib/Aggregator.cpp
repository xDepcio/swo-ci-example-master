#include "Aggregator.h"

#include <numeric>

using namespace swo;

void Aggregator::collect(const std::vector<int> &input) {
  sum = std::accumulate(std::begin(input), std::end(input), 0);
}

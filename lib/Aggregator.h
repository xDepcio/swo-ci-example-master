#include <vector>

namespace swo {

class Aggregator {
public:
  void collect(const std::vector<int> &input);

  int getSum() const { return sum; }

private:
  int sum = 0;
};

} // namespace swo

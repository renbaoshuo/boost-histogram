#include <boost/histogram.hpp>

using namespace boost::histogram;
int main() {
  auto h = make_static_histogram(axis::integer<>(0, 2), axis::integer<>(0, 2));
  h.at(0, -2);
}

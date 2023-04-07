#include <tkcore/tkcore_signal.hpp>

#define _GNU_SOURCE
#include <boost/stacktrace.hpp>

namespace tkht {
void HandlerSignal(int signal_num) {
  std::cout << "Stack trace: " << std::endl;

  std::cout << boost::stacktrace::stacktrace() << std::endl;

  exit(signal_num);
}

void SubscribeSignalList(std::vector<int> signal_num_list) {
  for (int signal_num : signal_num_list) {
    signal(signal_num, HandlerSignal);
  }
}
} // namespace tkht

#include <tkcore/tkcore.hpp>

int main() {
  Debug = true;

  // log
  Msg("Message.");
  Err("Error!");

  // iterator
  vector<int> arr{0, 1, 2, 3, 4, 5};
  for (int i = 0; i < arr.size(); i++) {
    ForJump(int, v, arr, i) {
      printf("%d - ", v);
    }
    printf("\n");
  }

  // signal
  SubscribeSignalCrash();
  abort();

  return 1;
}
#include <tkcore/tkcore.hpp>

int main() {
  Debug = true;

  // log
  Msg("Message.");
  Err("Error!");

  // iterator
  vector<int> arr{0, 1, 2, 3, 4, 5};
  for (int jump_i = 0; jump_i < arr.size(); jump_i++) {
    printf(" - ");
    ForJump(i, arr, jump_i) {
      printf("[%d]%d - ", i, arr[i]);
    }
    printf("\n");
  }

  // signal
  SubscribeSignalCrash();
  abort();

  return 1;
}
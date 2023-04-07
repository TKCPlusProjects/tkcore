#include <tkcore/tkcore.hpp>

using namespace tkht;

void crash() { abort(); }

int main() {
  Debug = true;

  // log
  Log(stdout, "Log", "Log of %s", "Log");
  Msg("Log of %s", "Msg");
  Err("Log of %s", "Err");

  // signal
  SubscribeSignalList({SIGABRT});
  crash();

  return 1;
}
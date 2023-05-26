#include <tkcore/tkcore.hpp>

int main() {
  Debug = true;

  Msg("Message.");
  Err("Error!");

  SubscribeSignalCrash();

  abort();

  return 1;
}
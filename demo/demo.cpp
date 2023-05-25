#include <tkcore/tkcore.hpp>

int main() {
  Debug = true;

  Msg("Message.");
  Err("Error!");

  SubscribeSignalAbort();

  abort();

  return 1;
}
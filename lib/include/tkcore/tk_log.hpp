#ifndef tkcore_log_hpp
#define tkcore_log_hpp

#include <tkcore/tk_base.hpp>

namespace tkht {
#define Log(restrict, tag, format, ...)                                        \
  if (Debug) {                                                                 \
    fprintf(restrict, "[%s]: ", tag);                                          \
    fprintf(restrict, format, ##__VA_ARGS__);                                  \
    fprintf(restrict, "\n");                                                   \
  }
#define Msg(format, ...) Log(stdout, "Msg", format, ##__VA_ARGS__)
#define Err(format, ...) Log(stderr, "Err", format, ##__VA_ARGS__)
#define Assert(e, format, ...)                                                 \
  if (!(e)) {                                                                  \
    Err(format, ##__VA_ARGS__)                                                 \
  };                                                                           \
  assert(e)
} // namespace tkht

#endif /* tkcore_log_hpp */

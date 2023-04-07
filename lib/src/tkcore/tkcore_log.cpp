#include <tkcore/tkcore_log.hpp>

namespace tkht {
int Print(FILE *stream, const char *tag, const char *format, va_list arg_list) {
  int result = 0;
  if (Debug) {
    fprintf(stream, "[%s]: ", tag);
    result = vfprintf(stream, format, arg_list);
    fprintf(stream, "\n");
  }
  return result;
}

int Log(FILE *stream, const char *tag, const char *format, ...) {
  int result = 0;
  {
    va_list arg_list;
    va_start(arg_list, format);
    result = Print(stream, tag, format, arg_list);
    va_end(arg_list);
  }
  return result;
}

int Msg(const char *format, ...) {
  int result = 0;
  {
    va_list arg_list;
    va_start(arg_list, format);
    result = Print(stdout, "Msg", format, arg_list);
    va_end(arg_list);
  }
  return result;
}
int Err(const char *format, ...) {
  int result = 0;
  {
    va_list arg_list;
    va_start(arg_list, format);
    result = Print(stderr, "Err", format, arg_list);
    va_end(arg_list);
  }
  return result;
}
} // namespace tkht

/// @file tkcore_singleton.hpp
#ifndef tkcore_singleton
#define tkcore_singleton

#include <tkcore/tkcore_base.hpp>

namespace tkht
{
/// @brief 单例
template <typename T>
class Singleton {
public:
  static T& Shared() {
    static T instance;
    return instance;
  }
};

#define TKHT_SIGNLETON(NAME)                    \
private:                                        \
  NAME(const NAME&)            = delete;        \
  NAME& operator=(const NAME&) = delete;        \
public:                                         \
  static NAME& Shared() {                       \
    return Singleton<NAME>::Shared(); \
  }
}

#endif

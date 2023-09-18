/// @file tkcore_singleton.hpp
#ifndef tkcore_singleton
#define tkcore_singleton

#include <tkcore/tkcore_base.hpp>

namespace tkht
{
/// @brief 单例
class Singleton {
protected:
  ~Singleton() {
  }

  Singleton() {
  }

  Singleton(const Singleton&)            = default;
  Singleton& operator=(const Singleton&) = default;
public:
  static Singleton& Shared() {
    static Singleton instance;
    return instance;
  }
};

#define TKHT_SIGNLETON(NAME, MENBER_LIST)             \
  class NAME : public Singleton {                     \
  public:                                             \
    static NAME& Shared() {                           \
      return static_cast<NAME&>(Singleton::Shared()); \
    }                                                 \
                                                      \
    MENBER_LIST                                       \
  }

}

#endif

#include <boost/test/unit_test.hpp>
#include <tkcore/tkcore.hpp>

BOOST_AUTO_TEST_CASE(tkcore_test_singleton_manual) {
  using namespace tkht;

  class SingletonManual : public Singleton {
  public:
    static SingletonManual& Shared() {
      return static_cast<SingletonManual&>(Singleton::Shared());
    }

    int id = 0;
    void set_id(int id) {
      this->id = id;
    }
  };

  SingletonManual::Shared().set_id(9);

  BOOST_CHECK_EQUAL(SingletonManual::Shared().id, 9);
}

BOOST_AUTO_TEST_CASE(tkcore_test_singleton_macro) {
  using namespace tkht;

  TKHT_SIGNLETON(SingletonMacro, 
    int id = 0;
    void set_id(int id) {
      this->id = id;
    }
  );

  SingletonMacro::Shared().set_id(9);

  BOOST_CHECK_EQUAL(SingletonMacro::Shared().id, 9);
}
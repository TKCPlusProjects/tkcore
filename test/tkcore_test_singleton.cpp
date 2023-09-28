#include <boost/test/unit_test.hpp>
#include <tkcore/tkcore.hpp>

BOOST_AUTO_TEST_CASE(tkcore_test_singleton_manual) {
  using namespace tkht;

  class SingletonManual1 {
  public:
    int id = 0;

    void set_id(int id) {
      this->id = id;
    }
  };

  class SingletonManual2 {
  public:
    int id = 0;

    void set_id(int id) {
      this->id = id;
    }
  };

  Singleton<SingletonManual1>::Shared().set_id(1);
  Singleton<SingletonManual2>::Shared().set_id(2);

  BOOST_CHECK_EQUAL(Singleton<SingletonManual1>::Shared().id, 1);
  BOOST_CHECK_EQUAL(Singleton<SingletonManual2>::Shared().id, 2);
}

BOOST_AUTO_TEST_CASE(tkcore_test_singleton_macro) {
  using namespace tkht;

  class SingletonMacro {
    TKHT_SIGNLETON(SingletonMacro)
  public:
    int id = 0;

    void set_id(int id) {
      this->id = id;
    }
  };

  SingletonMacro::Shared().set_id(9);

  BOOST_CHECK_EQUAL(SingletonMacro::Shared().id, 9);
}

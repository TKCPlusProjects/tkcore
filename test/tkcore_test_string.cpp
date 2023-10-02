#include <boost/test/unit_test.hpp>
#include <tkcore/tkcore.hpp>

BOOST_AUTO_TEST_CASE(tkcore_test_string) {
  using namespace tkht;

  // 开启日志
  Debug                     = true;
  
  std::vector<std::string> list = StringSplit("0.1.2", '.');
  
  BOOST_CHECK_EQUAL(list[0], "0");
  BOOST_CHECK_EQUAL(list[1], "1");
  BOOST_CHECK_EQUAL(list[2], "2");
}
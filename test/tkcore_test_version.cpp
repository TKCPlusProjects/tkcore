#include <boost/test/unit_test.hpp>
#include <tkcore/tkcore.hpp>

BOOST_AUTO_TEST_CASE(tkcore_test_version) {
  using namespace tkht;

  // 开启日志
  Debug                     = true;
  
  BOOST_CHECK_EQUAL(VersionCompare("1.0.0", "0.0.1"), +1);
  BOOST_CHECK_EQUAL(VersionCompare("1.0.0", "1.0.1"), -1);
  BOOST_CHECK_EQUAL(VersionCompare("1.0.0.0", "1.0.0"), +1);
  BOOST_CHECK_EQUAL(VersionCompare("1.0.0", "1.0.0.0"), -1);
  BOOST_CHECK_EQUAL(VersionCompare("1.0.0", "1.0.0"), +0);
}
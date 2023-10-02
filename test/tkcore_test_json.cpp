#include <boost/test/unit_test.hpp>
#include <tkcore/tkcore.hpp>

BOOST_AUTO_TEST_CASE(tkcore_test_json) {
  using namespace tkht;

  Debug = true;

  JSON json("test.json", "test.json");

  BOOST_TEST(json.is_null());

  json["name"] = "test";
  json["array"] = {"test0", "test1"};
  json["map"] = {{"test0", "test0"}, {"test1", "test1"}};

  json.save();
  json.load();

  BOOST_CHECK_EQUAL(json["name"], "test");
  BOOST_CHECK_EQUAL(json["array"][0], "test0");
  BOOST_CHECK_EQUAL(json["array"][1], "test1");
  BOOST_CHECK_EQUAL(json["map"]["test0"], "test0");
  BOOST_CHECK_EQUAL(json["map"]["test1"], "test1");
}
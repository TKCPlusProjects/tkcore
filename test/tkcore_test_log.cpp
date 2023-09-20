#include <boost/test/unit_test.hpp>
#include <tkcore/tkcore.hpp>

BOOST_AUTO_TEST_CASE(tkcore_test_log) {
  using namespace tkht;
  
  // 开启日�?
  Debug = true;
  const char *log_file_name = "log.txt";

  // 写入日志
  FILE *log_file_write = fopen(log_file_name, "w");
  Log(log_file_write, "Log", "Log of %s", "Log");
  fclose(log_file_write);

  // 读取日志
  FILE *log_file_read = fopen(log_file_name, "r");
  fseek(log_file_read, 0, SEEK_SET);
  char buffer[256];
  fgets(buffer, sizeof(buffer), log_file_read);
  fclose(log_file_read);

  BOOST_CHECK_EQUAL(buffer, "[Log]: Log of Log\n");
}
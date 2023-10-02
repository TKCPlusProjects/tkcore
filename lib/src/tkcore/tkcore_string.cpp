#include <tkcore/tkcore_string.hpp>

namespace tkht
{
std::vector<std::string> StringSplit(std::string str, const char separator) {
  std::vector<std::string> ret;

  std::istringstream iss(str);
  std::string piece;
  while (std::getline(iss, piece, separator)) {
		ret.push_back(piece);
	}
  return ret;
}
}
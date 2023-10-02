/// @file tkcore_string.hpp
#ifndef tkcore_string
#define tkcore_string

#include <tkcore/tkcore_base.hpp>

namespace tkht
{
/// @brief 字符串分割
/// @param str 字符串
/// @param separator 分隔符
/// @return 分割后的字符串数组
std::vector<std::string> StringSplit(std::string str, const char separator);
}

#endif

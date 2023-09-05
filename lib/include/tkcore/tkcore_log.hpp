/// @file tkcore_log.hpp
#ifndef tkcore_log
#define tkcore_log

#include <tkcore/tkcore_base.hpp>

namespace tkht
{
/// @brief 输出格式化字符串到文件流
/// @param stream 文件流
/// @param tag 字符串标签
/// @param format 格式化模板
/// @param ... 格式化参数
/// @return 输出格式化字符串长度
int Log(FILE *stream, const char *tag, const char *format, ...);

/// @brief 输出格式化字符串到stdout文件流
/// @param format 格式化模板
/// @param ... 格式化参数
/// @return 输出格式化字符串长度
int Msg(const char *format, ...);

/// @brief 输出格式化字符串到stderr文件流
/// @param format 格式化模板
/// @param ... 格式化参数
/// @return 输出格式化字符串长度
int Err(const char *format, ...);
}

#endif

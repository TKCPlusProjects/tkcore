/**
 * @file tkcore_log.hpp
 * @brief 日志函数头文件
 * 
 */

#ifndef tkcore_log_hpp
#define tkcore_log_hpp

#include <tkcore/tkcore_base.hpp>

/**
 * @brief Namespace of TokiHunter
 * 
 */
namespace tkht {
/**
 * @brief 输出文字流
 * 
 * @param stream 输出的目标文件
 * @param tag 标签
 * @param format 格式
 * @param ... 内容
 * @return int 输出的文字流长度
 */
int Log(FILE *stream, const char *tag, const char *format, ...);
/**
 * @brief 输出stdout文字流
 * 
 * @param format 格式
 * @param ... 内容
 * @return int 输出的文字流长度
 */
int Msg(const char *format, ...);
/**
 * @brief 输出stderr文字流
 * 
 * @param format 格式
 * @param ... 内容
 * @return int 输出的文字流长度
 */
int Err(const char *format, ...);
} // namespace tkht

#endif /* tkcore_log_hpp */

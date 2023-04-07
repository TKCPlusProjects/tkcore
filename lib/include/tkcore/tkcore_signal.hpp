/**
 * @file tkcore_signal.hpp
 * @brief 异常捕获函数头文件
 * 
 */

#ifndef tkcore_signal_hpp
#define tkcore_signal_hpp

#include <tkcore/tkcore_base.hpp>

/**
 * @brief Namespace of TokiHunter
 * 
 */
namespace tkht {
/**
 * @brief 订阅信号崩溃
 * 
 * @param signal_num_list 信号类型列表
 */
void SubscribeSignalList(std::vector<int> signal_num_list);
} // namespace tkht

#endif /* tkcore_signal_hpp */

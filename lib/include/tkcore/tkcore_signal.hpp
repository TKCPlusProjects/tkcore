/// @file tkcore_signal.hpp
#ifndef tkcore_signal
#define tkcore_signal

#include <tkcore/tkcore_base.hpp>

namespace tkht
{
/// @brief 订阅信号崩溃
/// @param signal_num_list 信号类型列表
void SubscribeSignalList(std::vector<int> signal_num_list);
}

#endif

/**
 * @file tkcore_base.hpp
 * @brief 基础头文件
 * 
 */

#ifndef tkcore_base_hpp
#define tkcore_base_hpp

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <sstream>

#include <map>
#include <list>
#include <vector>
#include <algorithm>

#include <functional>

#include <stdarg.h>
#include <signal.h>

/**
 * @brief Namespace of TokiHunter
 * 
 */
namespace tkht {
/**
 * @brief 命名空间内的运行环境
 * 
 */
extern bool Debug;
} // namespace tkht

#endif /* tkcore_base_hpp */

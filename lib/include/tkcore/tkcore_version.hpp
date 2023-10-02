/// @file tkcore_version.hpp
#ifndef tkcore_version
#define tkcore_version

#include <tkcore/tkcore_base.hpp>

namespace tkht
{
/// @brief 版本对比
/// @param version_local 本地版本
/// @param version_visit 访问版本
/// @return [> : +1]; [< : -1]; [= : 0]
int VersionCompare(std::string version_local, std::string version_visit);
}

#endif

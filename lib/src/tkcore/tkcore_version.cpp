#include <tkcore/tkcore_version.hpp>
#include <tkcore/tkcore_string.hpp>

namespace tkht
{
int VersionCompare(std::string version_local, std::string version_visit) {
  std::vector<std::string> version_local_list = StringSplit(version_local, '.');
  std::vector<std::string> version_visit_list = StringSplit(version_visit, '.');

  size_t local_size = version_local_list.size();
  size_t visit_size = version_visit_list.size();

  for (int i = 0; i < local_size && i < visit_size ; i++) {
    if (version_local_list[i] > version_visit_list[i]) {
      return 1;
    }
    if (version_local_list[i] < version_visit_list[i]) {
      return -1;
    }
  }
  
  if (local_size > visit_size) {
    return 1;
  }
  if (local_size < visit_size) {
    return -1;
  }
  
  return 0;
}
}

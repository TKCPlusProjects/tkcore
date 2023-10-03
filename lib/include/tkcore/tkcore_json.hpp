/// @file tkcore_json.hpp
#ifndef tkcore_json
#define tkcore_json

#include <tkcore/tkcore_base.hpp>
#include <tkcore/tkcore_log.hpp>

namespace tkht
{
/// @brief JSON结构体
struct JSON: public nlohmann::json {
protected:
  /// @brief 标准化文件名
  std::string    standard_filename;
  /// @brief 文件路径
  std::string    path;
public:
  /// @brief 构造函数
  /// @param standard_filename 标准化文件名
  /// @param path 文件路径
  JSON(std::string standard_filename, std::string path = std::string());

  /// @brief 路径更新
  virtual void path_update(std::string path);

  /// @brief 路径检查
  /// @return 路径是否符合标准
  virtual bool path_check();

  /// @brief 加载
  virtual void load(std::string path = std::string());

  /// @brief 保存
  virtual void save(std::string path = std::string());
};
}

#endif

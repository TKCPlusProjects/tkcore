#include <tkcore/tkcore_json.hpp>

namespace tkht
{
JSON::JSON(std::string standard_filename, std::string path) :
  standard_filename(standard_filename),
  path(path) {
  };

void JSON::path_update(std::string path) {
  if (path.length() > 0) {
    this->path = path;
  }
}

bool JSON::path_check() {
  return std::filesystem::path(path).filename() == standard_filename;
};

void JSON::load(std::string path) {
  clear();

  path_update(path);
  if (path_check()) {
    std::ifstream ifs(this->path);
    if (ifs.is_open()) {
      merge_patch(nlohmann::json::parse(ifs));
      ifs.close();
    } else {
      Err("JSON加载文件 %s 打开失败", this->path.c_str());
    }
  }
}

void JSON::save(std::string path) {
  path_update(path);
  if (path_check()) {
    std::ofstream ofs(this->path);
    if (ofs.is_open()) {
      ofs << dump(2);
      ofs.close();
    } else {
      Err("JSON保存文件 %s 打开失败", this->path.c_str());
    }
  }
}
}

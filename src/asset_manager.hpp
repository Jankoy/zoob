#pragma once

#include <raylib.h>
#include <string>

struct RawData {
  const unsigned char *const data;
  const size_t size;
};

class AssetManager {
public:
  static RawData load_data(const std::string &data_path);
  static Image load_image(const std::string &image_path);
  static Texture load_texture(const std::string &texture_path);
};

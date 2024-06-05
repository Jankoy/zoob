#include "asset_manager.hpp"

#include "bundle.h"
#include <cstring>
#include <unordered_map>

static std::unordered_map<std::string, Texture> texture_cache;

RawData AssetManager::load_data(const std::string &data_path) {
  for (size_t i = 0; i < resources_count; ++i)
    if (strcmp(resources[i].file_path, data_path.c_str()) == 0)
      return RawData{&bundle[resources[i].offset], resources[i].size};
  return RawData{};
}

Image AssetManager::load_image(const std::string &image_path) {
  RawData image_data = load_data(image_path);
  return LoadImageFromMemory(GetFileExtension(image_path.c_str()),
                             image_data.data, image_data.size);
}

Texture AssetManager::load_texture(const std::string &texture_path) {
  if (texture_cache.find(texture_path) != texture_cache.end())
    return texture_cache[texture_path];
  Image image = AssetManager::load_image(texture_path);
  Texture texture = LoadTextureFromImage(image);
  texture_cache[texture_path] = texture;
  return texture;
}

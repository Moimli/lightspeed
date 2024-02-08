#pragma once

#include <vector>
#include <string>

#ifdef _WIN32
  #define LIGHTSPEED_EXPORT __declspec(dllexport)
#else
  #define LIGHTSPEED_EXPORT
#endif

LIGHTSPEED_EXPORT void lightspeed();
LIGHTSPEED_EXPORT void lightspeed_print_vector(const std::vector<std::string> &strings);

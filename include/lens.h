#pragma once
#include <memory>
#include "surface/surface.h"

class Lens {
    std::unique_ptr<Surface> surface;
};
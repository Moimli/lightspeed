#pragma once

#include <ray/ray.h>

namespace Ray
{
    struct Hit
    {
        Ray reflected;
        Ray refracted;
    };
} // namespace Ray

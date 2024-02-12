#pragma once

#include <Eigen/Dense>

#include <ray/ray.h>

namespace Surface
{
    class Surface
    {
    public:
        virtual bool is_inside(const Eigen::Vector3f& position) = 0;
    };
}
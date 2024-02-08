#pragma once

#include <Eigen/Dense>

namespace Surface
{
    class Surface
    {
        virtual bool is_inside(Eigen::Vector3f position) = 0;
    };
}
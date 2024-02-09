#pragma once

#include <Eigen/Dense>

namespace Surface
{
    class SurfaceHit
    {
        Eigen::Vector3f position;
        Eigen::Vector3f normal;
    };

    class Surface
    {
    public:
        virtual bool is_inside(const Eigen::Vector3f& position) = 0;
        virtual SurfaceHit hit(const Ray::Ray& ray) = 0;
    };
}
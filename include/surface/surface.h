#pragma once

#include <optional>

#include <Eigen/Dense>

#include <ray/ray.h>

namespace Surface
{
    class Surface
    {
    public:
        virtual bool is_inside(const Eigen::Vector3f &position) const
        {
            return false;
        };

        virtual std::optional<double> solve(const Eigen::Vector3f &start, const Eigen::Vector3f &direction) const
        {
            return std::nullopt;
        };

        virtual Eigen::Vector3f getNormal(const Eigen::Vector3f& position) const {
            return Eigen::Vector3f(1, 1, 1);
        }
    };
}
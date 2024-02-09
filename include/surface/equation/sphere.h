#pragma once

#include <surface/surface.h>
#include <Eigen/Dense>

namespace Surface
{
    namespace Equation
    {
        class Sphere : public Surface
        {
        private:
            Eigen::Vector3f m_center;
            float m_radius;

        public:
            Sphere(const Eigen::Vector3f& center, float radius) : m_center(center), m_radius(radius) {}
            ~Sphere() {}

            bool is_inside(const Eigen::Vector3f& position) override
            {
                // Check if the distance from the position to the center of the sphere is less than or equal to the radius
                return (position - m_center).norm() <= m_radius;
            }
        };
    }
}
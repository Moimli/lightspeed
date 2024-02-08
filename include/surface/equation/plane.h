#pragma once

#include <surface/surface.h>
#include <Eigen/Dense>

namespace Surface
{
    namespace Equation
    {
        class Plane : Surface
        {
        private:
            Eigen::Vector4f m_v;

        public:
            Plane(const Eigen::Vector4f& v) : m_v(v){};
            ~Plane(){};

            bool is_inside(const Eigen::Vector3f& position) override
            {
                return (m_v(0) * position(0) + m_v(1) * position(1) + m_v(2) * position(2) + m_v(3)) <= 0;
            };
        };
    }
}
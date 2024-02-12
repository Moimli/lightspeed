#pragma once

#include <Eigen/Dense>
#include <material/material.h>

namespace Ray
{
    class Ray
    {
    private:
        const Material::Material& m_material;
        const Eigen::Vector3f m_origin;
        const Eigen::Vector3f m_direction;
    public:
        Ray(const Material::Material& material, const Eigen::Vector3f& origin, const Eigen::Vector3f direction) : m_material(material), m_origin(origin), m_direction(direction) {};
        ~Ray() {};

        inline const Eigen::Vector3f& getOrigin()
        {
            return m_origin;
        };

        inline const Eigen::Vector3f& getDirection()
        {
            return m_direction;
        };
    };    
} // namespace Ray

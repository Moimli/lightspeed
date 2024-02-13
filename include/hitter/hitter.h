#pragma once

#include <optional>

#include <ray/ray.h>
#include <ray/hit.h>
#include <surface/surface.h>
#include <material/material.h>

namespace Hitter
{
    class Hitter
    {
    private:
        const Ray::Ray m_ray;
    public:
        Hitter(const Ray::Ray& ray): m_ray(ray) {};
        ~Hitter() {};

        std::optional<Ray::Hit> hit(const Surface::Surface& surface, const Material::Material &material);
    };
} // namespace Hitter

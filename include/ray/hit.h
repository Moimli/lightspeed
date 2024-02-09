#pragma once

#include <ray/ray.h>
#include <surface/surface.h>

namespace Ray
{
    class Hit
    {
    private:
        const Ray reflected;
        const Ray refracted;
    public:
        Hit(const Surface::SurfaceHit& surfaceHit, const Material::Material& material);
        ~Hit();
    };
} // namespace Ray

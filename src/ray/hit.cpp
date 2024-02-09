#include <ray/hit.h>

Ray::Hit::Hit(const Ray::Ray& ray, const Surface::SurfaceHit &surfaceHit, const Material::Material &material)
{
    return Hit { 
        Ray (ray.GetMaterial(), surfaceHit.position, ray.getDirection() - 2 * (ray.getDirection().dot(surfaceHit.normal)) * surfaceHit.normal),
        Ray (material, surfaceHit.position, )
    };
}
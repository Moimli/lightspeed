#include <hitter/hitter.h>

std::optional<Ray::Hit> Hitter::Hitter::hit(const Surface::Surface &surface, const Material::Material &material)
{
    const Eigen::Vector3f &origin = this->m_ray.getOrigin();
    const Eigen::Vector3f &direction = this->m_ray.getDirection();

    return surface.solve(origin, direction).transform([&](double t)
                                                      {
        const Eigen::Vector3f position = origin + t * direction;
        const Eigen::Vector3f& normal = surface.getNormal(position);
        return Ray::Hit 
            {
                Ray::Ray (this->m_ray.getMaterial(), position, direction - 2 * direction.dot(normal) * normal),
                Ray::Ray (material, position, direction - 2 * direction.dot(normal) * normal)
            }; });
}
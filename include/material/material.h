#pragma once

#include <color/color.h>

namespace Material
{
    class Material
    {
    private:
        const Color::Color m_albedo;
        const float m_metallic;
        const float m_roughness;
        const float m_specular;
        const float m_refraction;

    public:
        Material(/* args */);
        ~Material();

        inline const Color::Color &getAlbedo()
        {
            return m_albedo;
        };

        inline float getMetallic()
        {
            return m_metallic;
        };

        inline float getRoughness()
        {
            return m_roughness;
        };

        inline float getSpecular()
        {
            return m_specular;
        };
    };
} // namespace Material

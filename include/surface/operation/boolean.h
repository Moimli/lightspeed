#pragma once

#include "surface/surface.h"

namespace Surface {
    namespace Operation {
        class Union : Surface::Surface {
        private:
            std::unique_ptr<Surface> m_a;
            std::unique_ptr<Surface> m_b;
        public:
            Union(const Surface& a, const Surface& b) : m_a(std::make_unique(a)), m_b(std::make_unique(b)) {}

            bool is_inside(const Eigen::Vector3f& position) override {
                return m_a->is_inside(position) || m_b->is_inside(position);
            };
        }
    }
}
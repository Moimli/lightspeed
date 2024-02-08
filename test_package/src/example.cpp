#include "lightspeed.h"
#include "surface/surface.h"
#include "surface/equation/plane.h"
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include <vector>
#include <string>

int main(int argc, char* argv[])
{
    lightspeed();

    std::vector<std::string> vec;

    vec.push_back("test_package");

    lightspeed_print_vector(vec);

    int result = Catch::Session().run(argc, argv);

    return result;
}

TEST_CASE("Test is_inside function of Plane class") {
    Eigen::Vector4f v(1.0f, 1.0f, 1.0f, -1.0f); // Example plane equation coefficients
    Surface::Equation::Plane plane(v);

    SECTION("Test point inside the plane") {
        Eigen::Vector3f point_inside(0.0f, 0.0f, 0.0f);
        REQUIRE(plane.is_inside(point_inside) == true);
    }

    SECTION("Test point outside the plane") {
        Eigen::Vector3f point_outside(2.0f, 2.0f, 2.0f);
        REQUIRE(plane.is_inside(point_outside) == false);
    }

    // You can add more test cases as needed
}
#pragma once
#include <memory>
#include "lens.h"
#include "sensor.h"

class Camera {
    std::unique_ptr<Lens> lens;
    std::unique_ptr<Sensor> sensor;
};
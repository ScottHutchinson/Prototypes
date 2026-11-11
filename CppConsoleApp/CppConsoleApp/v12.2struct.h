#pragma once
#include "v12.1struct.h"
#include "v12.2enum.h"

namespace v1202 {
    using namespace v1201;

    struct C {
        int c{ 32 };
        int pad{};
        double d{ 3.0 };
    };
}

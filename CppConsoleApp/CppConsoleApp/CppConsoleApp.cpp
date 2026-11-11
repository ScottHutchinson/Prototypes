// CppConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

namespace v0 {

    struct A {
        int a{1};
    };

    struct B {
        int b{2};
    };

    struct C {
        int c{3};
    };

}

namespace v1 {
    using namespace v0;

    struct B {
        int b{21};
        float f{ 2.0f };
    };

    struct D {
        int d{};
    };

}

namespace v2 {
    using namespace v1;

    struct C {
        int c{ 32 };
        int pad{};
        double d{ 3.0 };
    };
}

int main()
{
    const auto b1 = v1::B{};
    const auto formatted = std::format("v1::B: b = {:d}, f = {:.1f}", b1.b, b1.f);
    std::cout << formatted << "\n";

    const auto c2 = v2::C{};
    const auto formatted2 = std::format("v2::C: c = {:d}, pad = {:d}, d = {:.1f}", c2.c, c2.pad, c2.d);
    std::cout << formatted2 << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

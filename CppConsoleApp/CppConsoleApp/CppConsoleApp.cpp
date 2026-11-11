// CppConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "v12.0struct.h"
#include "v12.1struct.h"
#include "v12.2struct.h"

int main() {
    const auto e1 = static_cast<int>(v1201::B_E::b4);
    const auto e2 = static_cast<int>(v1202::C_E::c4);
    const auto e2d = static_cast<int>(v1202::D_E::d1);

    const auto b1 = v1201::B{};
    const auto formatted = std::format("v1::B: b = {:d}, f = {:.1f}, e = {:d}", b1.b, b1.f, e1);
    std::cout << formatted << "\n";

    const auto c2 = v1202::C{};
    const auto formatted2 = std::format("v2::C: c = {:d}, pad = {:d}, d = {:.1f}, e = {:d}", c2.c, c2.pad, c2.d, e2);
    std::cout << formatted2 << "\n";

    const auto d2 = v1202::D{};
    const auto formatted3 = std::format("v2::D: d = {:d}, e = {:d}", d2.d, e2d);
    std::cout << formatted3 << "\n";
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

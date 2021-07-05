#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <Windows.h>

namespace Colors
{
    enum Color {
        DEFAULT,
        BLUE,
        GREEN,
        LIGHT_BLUE,
        RED,
        PURPLE,
        YELLOW
    };

    void Reset();
    void Set_Color(static const int x);
    void Print(std::string text, static const int);
}

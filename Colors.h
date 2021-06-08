#include <iostream>
#include <Windows.h>

namespace Colors
{
    inline static void ResetC();

    inline void set_color(int i);

    void blue(std::string text);

    void green(std::string text);

    void light_blue(std::string text);

    void red(std::string text);

    void purple(std::string text);

    void yellow(std::string text);

    void print(std::string text, int x);
}

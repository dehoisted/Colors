#include "Colors.h"

HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);

inline void Colors::ResetC()
{
    SetConsoleTextAttribute(Console, 7);
}

void Colors::set_color(int i)
{
    SetConsoleTextAttribute(Console, i);
}

void Colors::blue(std::string text)
{
    SetConsoleTextAttribute(Console, 1);
    std::cout << text << std::endl;
    ResetC();
}

void Colors::green(std::string text)
{
    SetConsoleTextAttribute(Console, 2);
    std::cout << text << std::endl;
    ResetC();
}

void Colors::light_blue(std::string text)
{
    SetConsoleTextAttribute(Console, 3);
    std::cout << text << std::endl;
    ResetC();
}

void Colors::red(std::string text)
{
    SetConsoleTextAttribute(Console, 4);
    std::cout << text << std::endl;
    ResetC();
}

void Colors::purple(std::string text)
{
    SetConsoleTextAttribute(Console, 5);
    std::cout << text << std::endl;
    ResetC();
}

void Colors::yellow(std::string text)
{
    SetConsoleTextAttribute(Console, 6);
    std::cout << text << std::endl;
    ResetC();
}

void Colors::print(std::string text, int x)
{
    SetConsoleTextAttribute(Console, x);
    std::cout << text << std::endl;
    ResetC();
}

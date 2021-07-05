#include "Colors.h"

HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);

void Colors::Reset()
{
    SetConsoleTextAttribute(Console, 7);
}

void Colors::Set_Color(static const int x)
{
    SetConsoleTextAttribute(Console, x);
}

void Colors::Print(std::string text, static const int color)
{
    try {
        HANDLE console;
        console = GetStdHandle(STD_OUTPUT_HANDLE);

        switch (color)
        {
        case BLUE:
            SetConsoleTextAttribute(console, BLUE);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(console, DEFAULT);
            break;

        case GREEN:
            SetConsoleTextAttribute(console, GREEN);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(console, DEFAULT);
            break;

        case LIGHT_BLUE:
            SetConsoleTextAttribute(console, LIGHT_BLUE);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(console, DEFAULT);
            break;

        case RED:
            SetConsoleTextAttribute(console, RED);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(console, DEFAULT);
            break;

        case PURPLE:
            SetConsoleTextAttribute(console, PURPLE);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(console, DEFAULT);
            break;

        case YELLOW:
            SetConsoleTextAttribute(console, YELLOW);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(console, DEFAULT);
            break;

        default:
            std::cout << "Error in Colors.h: Invalid Color Listed!" << std::endl;
            break;
        }
    }

    catch (std::exception& e)
    {
        std::cout << "Exception thrown in Colors.h: " << e.what() << std::endl;
    }
}

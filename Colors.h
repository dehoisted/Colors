/*
  Windows Only
  COLORSSSSS
  1/24/2020
  Made by orlando#1337 on discord
*/

#include <iostream>
#include <Windows.h>

namespace Color {
    int colors = 6;

    /*
    Ok so basically you can parse a integer and then a string with color()
    The number you parse in is the desired color you want;
    Learn about the diff colors you can use;
     I only included basic colors but with this you can use whatever color(s) you want.
     */
    void color(int i, std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, i);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }

    // Set a color for the WHOLE entire program;
    // After setting color, all text will be the color you parse in.
    void set_color(int i)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, i);
        }
    }


    // Basic Color Functions
    void blue(std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, 1);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }

    void green(std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, 2);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }

    void light_blue(std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, 3);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }

    void red(std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, 4);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }

    void purple(std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, 5);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }

    void yellow(std::string text)
    {
        HANDLE  hConsole;
        int k;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        for (k = 1; k < 2; k++)
        {
            SetConsoleTextAttribute(hConsole, 6);
            std::cout << text << std::endl;
            SetConsoleTextAttribute(hConsole, 7);
        }
    }
}

// Uses namespace so now you can just type red("TEXT");
using namespace Color;

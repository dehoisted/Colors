/*
  Windows Only
  Make certain text certain color
  1/24/2020
  orlando#1337 on discord
*/

#pragma once
#include <iostream>
#include <windows.h> 

class Colors {
public:

    int colors = 6;

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
};

Colors color;

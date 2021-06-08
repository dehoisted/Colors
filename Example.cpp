#include <iostream>
#include "Colors.h"

int main()
{
	Colors::print("hi", 3);
	Colors::set_color(1);
	std::cout << "hi 1";
	Colors::ResetC();
	Colors::light_blue("hi 2");
}

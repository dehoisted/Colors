#include <iostream>
#include "Colors.h"
namespace CLRS = Colors; // Alias for the "Colors" namespace

int main()
{
	CLRS::Print("This is green", CLRS::GREEN);
	CLRS::Set_Color(CLRS::PURPLE);
	std::cout << "This will be purple" << std::endl;

	CLRS::Reset();
	std::cout << "This will be normal, because we reset the set color" << std::endl;
}

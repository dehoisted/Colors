// Example -- Colors
int main()
{
    // Parse desired color for 1 line
    color(2, "I chose a color I wanted for this line!"); // Green

    // Set whole program to desired color
    set_color(5); // Purple
    std::cout << "Using set color will change all text to 1 color" << std::endl;
    std::cout << "That means this text will have color too" << std::endl;

    // Basic Function
    red("Red is here already so I can do this easily"); // Red

	return 0;
}

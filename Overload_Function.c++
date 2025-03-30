#include <iostream>

// Function declarations
void Pizza(std::string toppings);
void Pizza();

int main()
{
    // Calling the overloaded functions
    Pizza();               // Calls the Pizza() function with no arguments
    Pizza("Pepperoni");    // Calls the Pizza(std::string toppings) function with "Pepperoni" as an argument

    return 0;
}

// Function definitions

// Function with no parameters
void Pizza()
{
    std::cout << "The Pizza is ready" << std::endl;
}

// Overloaded function with a string parameter
void Pizza(std::string toppings)
{
    std::cout << "The " + toppings + " Pizza is ready" << std::endl;
}
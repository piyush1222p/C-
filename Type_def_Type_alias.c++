#include <iostream>
#include <vector>
// Importing vector helps to store data types with values

/*
typedef std::string text_1;
typedef int number;
*/

// It actually defines the datatype in short for us

// (Using) keyword is used for the same task as typedef is used
using text_1 = std::string;
using number = int;

int main()
{
    // Define variables using type aliases
    text_1 Name = "Piyush";  // text_1 is the defined alias for std::string
    number age = 20;         // number is the defined alias for int

    // Display the values of the variables
    std::cout << "Name: " << Name << "\n";
    std::cout << "Age: " << age << "\n";

    return 0;
}
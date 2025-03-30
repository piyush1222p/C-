#include <iostream>
#include <algorithm>  // Include the algorithm header for the fill function

int main()
{
    // fill() = fills a range of elements with a specified value
    // fill(start, stop, value)
    
    const int size = 99;  // Define the size of the array
    std::string fruits[size];  // Declare an array of strings with the specified size

    // Use the fill function to fill different parts of the array with different values
    std::fill(fruits, fruits + (size / 3), "Apple");  // Fill the first third of the array with "Apple"
    std::fill(fruits + (size / 3), fruits + (size / 3) * 2, "Pizza");  // Fill the second third of the array with "Pizza"
    std::fill(fruits + (size / 3) * 2, fruits + size, "Hamburger");  // Fill the last third of the array with "Hamburger"

    // Loop through the array and print each element
    for (const std::string& fruit : fruits)
    {
        std::cout << fruit << std::endl;  // Print the current element
    }

    return 0;
}
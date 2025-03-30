#include <iostream>

/* 
Dynamic memory = Memory that is allocated after the program is already compiled & running.
Use the new keyword to allocate memory in the heap instead of the stack.
Useful when we don't know how much memory we will need. Makes our programs more flexible, especially when accepting user input.
*/

int main()
{
    char *Pgrade = NULL;  // Declare a pointer to char and initialize it to NULL
    int size;  // Declare an integer variable to store the size of the array

    std::cout << "How many grades to enter in? ";
    std::cin >> size;  // Get the size of the array from the user

    Pgrade = new char[size];  // Allocate memory for the array of chars on the heap

    // Loop to get grades from the user
    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> Pgrade[i];  // Store each grade in the allocated array
    }

    // Loop to print the grades
    std::cout << "Grades entered: ";
    for (int i = 0; i < size; i++) {
        std::cout << Pgrade[i] << " ";  // Print each grade
    }
    std::cout << std::endl;

    delete[] Pgrade;  // Deallocate the memory allocated for the array

    return 0;
}
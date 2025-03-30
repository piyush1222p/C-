#include <iostream>

/* 
null Value = A special value that means something has no value. When a pointer is holding a null value, 
it means that the pointer is not pointing to any memory location.
nullptr = keyword represents a null pointer literal.
nullptrs are helpful when determining if an address was successfully assigned to a pointer or not.
*/

int main()
{
    int *pointer = nullptr;  // Declare a pointer to int and initialize it to nullptr
    int age = 20;  // Declare an integer variable and initialize it to 20

    pointer = &age;  // Assign the address of 'age' to the pointer

    if (pointer == nullptr)  // Check if the pointer is still nullptr
    {
        std::cout << "Address was not Assigned..." << std::endl;
    }
    else
    {
        std::cout << "Address was Assigned..." << std::endl;
        std::cout << *pointer << std::endl;  // Dereference the pointer to get the value of 'age'
    }

    return 0;
}
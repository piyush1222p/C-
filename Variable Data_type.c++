#include <iostream>

//Variable Data_type

int main()
{
    // Int is used to declare decimal value to a variable.
    int age = 20;
    int y = 10;

    // Double is used to declare decimal value to a variable.
    double z = 12.3;

    // Single character is used to declare single string value to a variable.
    char grade = 'A';

    // Boolean type is used to declare single value to a variable.
    bool istrue = true;

    // String type (Object that represents a sequence of text)
    std::string name = "Piyush";

    //Dislplay the int value
    std::cout << "The value of age is: " << age <<"\n";
    std::cout << "The value of y is: " << y <<"\n";
    std::cout << "The value of z is: " << z <<"\n";
    std::cout << "The value of grade is: " << grade <<"\n";
    std::cout << "The value of bool is: " << istrue <<"\n";
    std::cout <<"\n";
    std::cout << "The name of Student: " << name <<"\n";
    std::cout << "He is " << age << " years old..." <<"\n";
    
    return 0;
}


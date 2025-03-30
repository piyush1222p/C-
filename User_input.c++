#include <iostream>
int main()
{
    //Functions created
    std::string Name;
    int age;

    //Input_asked functions
    std::cout << "Enter your name: ";
    std::getline(std::cin, Name);   //It actually accepts the input with all of the spaces from the user

    std::cout <<"Enter your age: ";
    std::cin>>age;

    //Display functions
    std::cout<<"Hello"<<" My name is "<<Name<<"\n";
    std::cout<<"and I am "<<age<<" years old.";

    //return functions
    return 0;
}
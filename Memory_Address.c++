#include <iostream>
int main()
{
    //memory address = a location where the data is stored.
    //memory address can be access by (&variable).

    std::string Name = "Piyush";
    int age = 20;
    bool isstudent = true;
    char option = 'A';
    
    std::cout<<&Name<<std::endl;
    std::cout<<&age<<std::endl;
    std::cout<<&isstudent<<std::endl;
    std::cout<<&option<<std::endl;

    return 0;
}
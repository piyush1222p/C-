#include <iostream>

//namespace
namespace First
{
    std::string Name;
    int age;
}

//global varibale 
void greeting(std::string Name);
/*The function can be also defined after the main function by using global_variable space*/

//main body
int main()
{
    //namespace 
    using namespace First;
    //user input
    std::cout<<"What is your name: "<<std::endl;
    std::cin>>First::Name;

    std::cout<<"What is your age: "<<std::endl;
    std::cin>>First::age;

    //Function calling
    std::cout<<"The name of the Person is "<<Name<<std::endl;
    std::cout<<"The name of the Person is "<<age<<std::endl;

    greeting(Name);

    return 0;
}

//function
void greeting(std::string Name)
{
    std::cout<<"Hello World!!! "<<Name<<std::endl;
}
/*after that function will be accessed*/

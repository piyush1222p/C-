#include <iostream>
int main()
{
    std::string name;
    
    while (name.empty())
    {
        std::cout<<"What is your name"<<"\n";
        std::getline(std::cin,name);
        //end{code}
    }
    std::cout<<"Your name is "<<name<<"\n";
}
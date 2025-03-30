#include <iostream>
int main()
{
    //Asigning variable for taking age input
    int age;

    //Asking and storing value of age
    std::cout<<"What is your age: "<<"\n";
    std::cin>>age;

    //Puting condition for the<<ge input
    if(age>=18 and age<100)
    {
        std::cout<<"You are eligible to vote"<<"\n";
    }
    else if(age>10)
    {
        std::cout<<"You are about to vote"<<"\n";
    }
    else
    {
        std::cout<<"You are not eligible to vote"<<"\n";
    }

    //return function
    return 0;
}
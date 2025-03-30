#include <iostream>
int main()
{
    //Variable asigning function
    int temp;

    //Display and asked input
    std::cout<<"Enter the temp: "<<"\n";
    std::cin>>temp;

    //Condition
    if(!(temp>55 && temp<35))
    {
        std::cout<<"You are living in good climate..."<<"\n";
    }
    else
    {
        std::cout<<"You are living in bad climate..."<<"\n";
    }
    
    //return function
    return 0;
}
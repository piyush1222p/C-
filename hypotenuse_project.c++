//WAP to develop a Hypotenuse calculator

#include <iostream>
#include <cmath>

int main()
{
    //Variables for asigning values
    double base;
    double height;
    double hypotenuse;

    //Asking and Storing Values
    std::cout<<"Enter the height of the Triangle: "<<"\n";
    std::cin>>height;

    std::cout<<"Enter the base of the Triangle: "<<"\n";
    std::cin>>base;

    //Operation for calculating Hypotenuse
    hypotenuse = sqrt(pow(base,2)+pow(height,2));
    hypotenuse = round(hypotenuse);

    //Display of Hypotenuse
    std::cout<<"The Hypotenuse of the Triangle is "<<hypotenuse<<"\n";
}
#include <iostream>

void printnum(int num); //here the variable is assigned as the num for local scope
int main()
{
    int num = 2; //here the variable is assigned as the num for local scope
    
    printnum(num);

    return 0;
}

void printnum(int num)
{
    std::cout<<num<<std::endl;  //here the variable is assigned as the num for local scope
}
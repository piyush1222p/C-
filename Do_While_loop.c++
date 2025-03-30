#include <iostream>
int main()
{
    //asigning the variables
    int num;

    //executing do while loop
    do
    /*{Do} some block of code first,
    Then {while} repeat it again if the condition is true*/
    {
        std::cout<<"Enter the +ve number: "<<"\n";
        std::cin>>num;
    } while (num<0);
    
    //Displaying the number value
    std::cout<<"You entered: "<<num<<"\n";
    
}
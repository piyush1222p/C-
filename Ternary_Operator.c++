#include <iostream>
int main()
{
    //ternary operator ?: = replacement to an if/else statement
    //condition ? expression1 : expression2;

    int age = 15;
    age>=18 ? std::cout<<"You are eligible to vote"<<"\n":std::cout<<"You are uneligible to vote"<<"\n";

    //end code
    return 0;
}
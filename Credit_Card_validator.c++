#include <iostream>
int getdigit(const int number);
int sumOdddigit(const std::string cardnumber);
int sumEvendigit(const std::string cardnumber);
int main()
{
    std::string cardnumber;
    int result;

    std::cout<<"Enter a credit card #: "<<std::endl;
    std::cin>>cardnumber;

    result = sumEvendigit(cardnumber) +sumOdddigit(cardnumber);

    if (result % 10 == 0)
    {
        std::cout<<"The Card-Number "<<cardnumber<<" is Valid: "<<std::endl;
    }
    else
    {
        std::cout<<"The Card-Number "<<cardnumber<<" is Invalid: "<<std::endl;
    }
    

    return 0;
}
int getdigit(const int number)
{
    return number % 10 +(number / 10 % 10);
}
int sumOdddigit(const std::string cardnumber)
{
    int sum = 0;
    for(int i=cardnumber.size()-1;i>=0;i-=2)
    {
        sum+=cardnumber[i] - '0';
    }
    return sum;
}
int sumEvendigit(const std::string cardnumber)
{
    int sum = 0;
    for(int i=cardnumber.size()-2;i>=0;i-=2)
    {
        sum+=getdigit((cardnumber[i] - '0')*2);
    }
    return sum;
}

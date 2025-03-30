#include <iostream>
int main()
{
    std::cout<<"--------Start of calulator---------"<<"\n";
    //Asigning the variables
    char op;
    double num1;
    double num2;
    double result;

    //Asking for the Operation
    std::cout<<"Enter the Opeartion: (+,-,*,/)"<<"\n";
    std::cin>>op;

    std::cout<<"Enter the first number: "<<"\n";
    std::cin>>num1;

    std::cout<<"Enter the Second number: "<<"\n";
    std::cin>>num2;

    //Executing the Operation
    switch (op)
    {
        case '+':
        {
            result = num1 + num2;
            std::cout<<"The Sum is "<<result<<"\n";
            break;
        }
        case '-':
        {
            result = num1 - num2;
            std::cout<<"The Difference is "<<result<<"\n";
            break;
        }
        case '*':
        {
            result = num1 * num2;
            std::cout<<"The Product is "<<result<<"\n";
            break;
        }
        case '/':
        {
            result = num1 / num2;
            std::cout<<"The Division is "<<result<<"\n";
            break;
        }
        default:
        {
            std::cout<<"Pls Choose from the following operation...."<<"\n";
        }

    }
    std::cout<<"---------End of calculator---------"<<"\n";
    return 0;
}
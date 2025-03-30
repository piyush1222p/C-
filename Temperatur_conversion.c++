#include <iostream>
int main()
{
    //Variable asigning for operation
    double temp;
    char unit;
    double Converted_temp;

    //Variables and input asigning
    std::cout<<"*******Temperatur Conversion*******"<<"\n";
    std::cout<<"F = Fahrenheit"<<"\n";
    std::cout<<"C = Celsius"<<"\n";
    std::cout<<"What would you like to convert in "<<"\n";
    std::cin>>unit;
    std::cout<<"Enter the value for conversion: "<<"\n";
    std::cin>>temp;

    std::cout<<"*******Unit is assigned*******"<<"\n";

    //Operation on the basis of input
    switch (unit)
    {
        case 'C':
        {
            Converted_temp = ( temp* 9/5) + 32;
            std::cout<<"The temperature in Fahrenheit is "<<Converted_temp<<"°F"<<"\n";
            break;
        }
        case 'F':
        {
            Converted_temp = (temp - 32) * 5/9;
            std::cout<<"The temperature in Celsius is "<<Converted_temp<<"°C"<<"\n";
            break;
        }
        default:
        {
            std::cout<<"Input should be only in F,C!!"<<"\n";
        }
    }
    std::cout<<"End of Program!!"<<"\n";
    return 0;
}

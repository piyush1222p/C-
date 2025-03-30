#include <iostream>
#include <math.h>   /*Here we have include math.h library for using the round function*/

double area(double length);
/*Here the area function is declared with a return type of double and a parameter of type double. */
double volume(double length);

int main()
{
    //varibale declaration
    double length = 5.34;
    double Square = area(length);   /*Here the function is being called with the variable length as an argument*/
    double Cube = volume(length);   /*Here the function is being called with the variable length as an argument*/

    std::cout<<"Area of the Square: "<<round(Square)<<"cm^2"<<std::endl;
    std::cout<<"Volume of the Cube: "<<round(Cube)<<"cm^3"<<std::endl;

    return 0;
}

//return function will be there in non-void cases where the datatype is specified

double area(double length)
{
    return length*length;
}

double volume(double length)
{
    return length*length*length;
}

//Another Program for different type
/*#include <iostream>

//function for concatination
std::string concat(const std::string string1, const std::string string2);

int main()
{
    //varible declaration
    std::string first_name = "Piyush";
    std::string Last_name = "Shukla";

    //concatination calling
    std::string result = concat(first_name,Last_name);

    //display result
    std::cout << result << std::endl;
    return 0;
}

std::string concat(std::string string1,std::string string2)
{
    return string1+" "+string2;
}*/
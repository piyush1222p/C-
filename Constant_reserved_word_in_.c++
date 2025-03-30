#include <iostream>

//Constant reserved word in c++

int main()
{
    //The const keyword specifies that a variable's value is constant,
    //tells the compiler to prevent anything from modifying it,
    //(read-only)

    //Matheatical function for the Operation
    const double pi = 3.14;
    double radius = 10;
    double circumfrence = 2 * pi * radius;

    //Display the Operation
    std::cout << "The Circumfrence of the Circle " << circumfrence << " cm"<<"\n";

    return 0;
}

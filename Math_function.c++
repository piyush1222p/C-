#include <iostream>
#include <cmath>
int main()
{
    double x = 3.14;
    double y = 4.99;
    double z;

    //Operation on x,y
    //z = std::max(x,y);
    //z = std::min(x,y);
    //z = pow(x,y);
    //z = abs(x);
    //z = ceil(x);
    //z = floor(y);
    //z = sqrt(x);
    z = round(x);

    //Display function for the above Operation
    std::cout<<z<<"\n";
}
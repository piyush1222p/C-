#include <iostream>
int main()
{
    //Importing the randam value
    srand(time(NULL));

    //Pseudo-random = NOT truly random (but close)

    /*The modulo is used to fit the range of the random number to the range of the array*/
    int num1 = (rand() % 100) +1;
    /*The number after modulo  is the size of the array*/
    int num2 = (rand() % 100) +1;
    int num3 = (rand() % 100) +1;
    /*plus 1 is used to include the last element of the array*/
    int num4 = (rand() % 100) +1;
    int num5 = (rand() % 100) +1;
    int num6 = (rand() % 100) +1;

    //Displaying the random variable
    std::cout << "Random Number 1:  " << num1 << std::endl;
    std::cout << "Random Number 2:  " << num2 << std::endl;
    std::cout << "Random Number 3:  " << num2 << std::endl;
    std::cout << "Random Number 4:  " << num2 << std::endl;
    std::cout << "Random Number 5:  " << num2 << std::endl;
    std::cout << "Random Number 6:  " << num2 << std::endl;
}

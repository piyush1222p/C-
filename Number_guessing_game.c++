#include <iostream>

namespace variable
{
    int num,guess,tries;
}

int main()
{
    using namespace  variable;

    //importing random function
    srand(time(NULL));
    
    //initializing the number to be guessed
    num = (rand() % 100) +1;

    std::cout<<"***** Number guessing Game *****"<<std::endl;

    //do_while loop
    do
    {
        std::cout<<"Enter the Number between 1 to 100"<<std::endl;
        std::cin>>guess;

        //condition for the do_while loop
        if(guess<num)
        {
            std::cout<<"You have entered the too low number.."<<std::endl;
        }
        else if(guess>num)
        {
            std::cout<<"You have entered the too high number.."<<std::endl;
        }
        else
        {
            std::cout<<"Correct input..  "<<guess<<" is the correct number"<<std::endl;
        }
    } while (guess != num);
    return 0;
}
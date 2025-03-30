#include <iostream>
#include <ctime>
int main()
{
    //importing random value
    srand(time(0));

    //generating random number between 1 to 100
    int rand_num = rand() % 5 +1;

    //Switch case for giveaway
    switch (rand_num)
    {
    case 1:
    {
        std::cout<<"You Win the match!!"<<std::endl;
        break;
    }
    /*The break statement helps to  terminate the switch block execution at the end of the case.*/
    case 2:
    {
        std::cout<<"You secured the second_last position..."<<std::endl;
        break;
    }
    case 3:
    {
        std::cout<<"You secured the third position..."<<std::endl;
        break;
    }
    case 4:
    {
        std::cout<<"You secured the Fourth position...!!"<<std::endl;
        break;
    }
    case 5:
    {
        std::cout<<"You'r out of the Game!!!"<<std::endl;
        break;
    }
    }
    return 0;
}
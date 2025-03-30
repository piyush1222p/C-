#include <iostream>
int main()
{
    //2_D array
    std::string Cars[][3] = {{"Mustang","Porsche","Wagonr"},
                            {"Swift","Dzire","Lamborghini"},
                            {"Alagazar","Verna","Scorpio-n"}};

    std::cout<<Cars[0][1]<<std::endl;
    std::cout<<Cars[0][2]<<std::endl;
    std::cout<<Cars[0][3]<<std::endl;
    std::cout<<"\n";
    //asigning variables
    int rows = sizeof(Cars)/sizeof(Cars[0]);
    int coloumns = sizeof(Cars[0])/sizeof(Cars[0][0]);

    //iteration over the 2-D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            std::cout<<Cars[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}
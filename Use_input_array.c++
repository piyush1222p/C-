#include <iostream>
int main()
{
    std::string foods[5];
    long long size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    std::cout<<"Enter q to exit "<<std::endl;

    for(int i=0;i<size;i++)
    {
        std::cout<<"Enter the food no."<<i+1<<std::endl;
        std::getline(std::cin,temp);    /*We have used temperory varible scope to store the value of the input for quiting the loop*/
        if ((temp=="q")or(temp=="Q"))
        {
            break;
        }
        else
        {
            foods[i]=temp;
        }
    }
    //display iteration
    std::cout<<"Your following foods are: "<<std::endl;
    for(int i=0;!foods[i].empty();i++)  /*We have used empty() function to check if the string is empty or not*/
    {
        std::cout<<foods[i]<<std::endl;
    }
}
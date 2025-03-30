#include <iostream>
int main()
{
    //Array formation
    std::string Name[4] = {"Piyush","Anant","Prakhar","Vani"};

    int size = sizeof(Name)/sizeof(std::string);
    //Array iteration
    for(int i=0;i<size;i++)
    {
        std::cout<<Name[i]<<std::endl;
    }
    return 0;
}

/*The iteration on array is as follows*/
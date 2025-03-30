#include <iostream>
int main()
{
    // for_each loop = loop that ease the traverse over an iterable data set
    
    //Array formation
    std::string Name[4] = {"Piyush","Anant","Prakhar","Vani"};

    //Array iteration
    for(std::string Name:Name)
    {
        std::cout<<Name<<std::endl;
    }
    return 0; 
}
/*It dosn't need any iterator or any prefered data_type*/
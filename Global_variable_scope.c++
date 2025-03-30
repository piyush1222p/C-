#include <iostream>

int num = 2;    //Global variable: accessible from all functions

void function();

int main()
{
    //varibale assingning
    int num = 4;

    function();
    std::cout<<::num<<std::endl;    //this " :: " operator actually refers to the global variable
    
    return 0;
}

void function()
{
    std::cout<<num<<std::endl;
}

/*Always remenber the cpp will takes the local variables as in priority over the global variables.*/

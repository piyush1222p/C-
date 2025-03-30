#include <iostream>
namespace First
{
    int x = 0;
}

namespace Second
{
    int y = 1;
}

/*Name_Space= Provides a solution for preventing name conflicts in large projects.
            Each entinty needs a unique name. A namespace allows for identically named entities
            as long as the namespace are different*/
int main()
{
    //Accessing the namespace
    using namespace Second;
    using namespace First;
    /*int x = 22;
    int y =32;*/

    //Display method for the above operation
    std::cout<<"The value of x: "<<x<<"\n";
    std::cout<<"The value of y: "<<y<<"\n";
    //return function
    return 0;
}
//end{code}
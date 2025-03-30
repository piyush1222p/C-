#include <iostream>

/*Type_Conversion
    1. Explicit=precede value with new datatype
    2. Implicit=Automatic
*/
int main()
{
    //Asigning the variable
    int marks = 90;
    int total = 100;
    //marks are converted from int to double(decimal)
    double percentage = (double)marks / total * 100;

    //Display the variable
    std::cout << "The obtained percentage is: " << percentage <<"%"<< "\n";

    //return function
    return 0;
}
//end{code}

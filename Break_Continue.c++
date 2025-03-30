//Break-Continue
/*#include <iostream>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            break;//it actually breaks the loop and comes out of the loop
        }
        std::cout<<i<<"\n";
    }
}*/

#include <iostream>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue;//it actually skip at the posiiton where condition is put for continue statement
        }
        std::cout<<i<<"\n";
    }
}
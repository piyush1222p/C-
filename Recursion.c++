/*
#include <iostream>
void walk(int steps);
int main(){
    walk(10);
    return 0;
}
void walk(int steps){
    for (int i=0;i<steps;i++)   //This is an Iterative function
    {
        std::cout<<"You took a step...\n";
    }
}
*/
/*
#include <iostream>
int factorial(int num);
int main(){
    std::cout<<factorial(5);
    return 0;
}
int factorial(int num){
    if (num>1)
    {
        return num*factorial(num-1);
    }
    else
    {
        return 1;
    }
}
*/

#include <iostream>
void walk(int steps);
int main(){
    walk(10);
    return 0;
}
void walk(int steps){
    if (steps>0)    //This is a recursive function
    {
        /*Here the walk function is passed with decrement to call it back with refrence to the previous call*/
        std::cout<<"You walk some steps...\n";
        walk(steps-1);
    }
}
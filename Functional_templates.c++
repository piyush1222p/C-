/*
#include <iostream>
int max(int x,int y){
    return (x>y)? x:y;  //Used ternary Operator here
}
double max(double x,double y){
    return (x>y)? x:y;
}
char max(char x,char y){
    return (x>y)? x:y;
}
int main(){
    std::cout<<max('1','2')<<std::endl;
    return 0;
}
*/

/*
#include <iostream>
template <typename T>
T max(T x,T y){
    return (x>y)? x:y;  //Here the template function is used to design the common function for all data types
}
int main(){
    std::cout<<max('1','2')<<"\n";
    return 0;
}
*/

#include <iostream>
template <typename T,typename U>
auto max(T x,U y){
    return (x>y)? x:y;
}
int main(){
    std::cout<<max(1,'2')<<"\n";
    return 0;
}

/*Auto keyword used here actually compares the two or more different type of datatype 
and then show the result*/
/*
Function Templates = Describes what a function looks like.
Can be used to generate as many overloaded function with different data-types can be used*/
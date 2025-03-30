//pass by value - which dosn't change the original vlaue.

#include <iostream>

void swap(int roll_no,int age);

int main()
{
    int roll_no = 114;
    int age = 20;

    //calling function
    swap(roll_no,age);

    std::cout<<"The roll-no is: "<<roll_no<<std::endl;
    std::cout<<"The age is: "<<age<<std::endl;

    return 0;
}
void swap(int roll_no,int age)
{
    int temp;
    temp = roll_no;
    roll_no = age;
    age = temp;
}
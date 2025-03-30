/*
Structs = A structure that groups related variable under one name 
Structs can contain many different data-types (Strings,integer,double,char,bool)
Variables in a structs are known as "Members"
Members can be access with .  "Class member access operator"*/

#include <iostream>

struct Student{
        std::string Name;
        int Age;
        double gpa;
        bool enrolled;
        };
int main(){
    Student student1;
    student1.Name = "Piyush";
    student1.Age = 20;
    student1.gpa = 8.5;
    student1.enrolled = true;

    //display fucntion
    std::cout<<student1.Name<<std::endl;
    std::cout<<student1.Age<<std::endl;
    std::cout<<student1.gpa<<std::endl;
    std::cout<<student1.enrolled<<std::endl;

    return 0;
    }
#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;

        Person(){
            cout<<"Parent class constructor called"<<endl;//parent class constructor
        }
        ~Person(){
            cout<<"Person destructor called"<<endl; //Parent class destructor
        }
};
class Student :public Person{
    public:
        int rollno;
     /*The compiler first calls the parent class constructor and then calls the child class constructor*/
        Student(){
            cout<<"Child class constructor called"<<endl;//child class constructor
        }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Rollno: "<<rollno<<endl;
    }
    ~Student(){
        cout<<"Student Destructor called"<<endl; //Child class destructor
    }
};
int main(){
    Student s1;
    s1.name = "john";
    s1.age = 20;
    s1.rollno = 101;

    s1.display();
}
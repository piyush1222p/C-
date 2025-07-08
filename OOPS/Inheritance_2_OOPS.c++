#include<iostream>
using namespace std;
/*Multiple Inheritance : A derived class having 2 or more parent class*/
class student{// Base class
    public:
        string name;
        int age;
    
        student(){
            cout<<"Default constructor called for student"<<endl;
        }
        void getinfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

class Teacher{// Base class
    public:
    string subject;
    double salary;
    Teacher(){
        cout<<"Default constructor called for Teacher"<<endl;
    }
};

class TeachingAssistant:public student,public Teacher{

};
int main(){
    TeachingAssistant TA1;
    TA1.name = "John";
    TA1.age = 22;
    TA1.salary = 50000;
    TA1.subject = "Mathematics";
    TA1.getinfo();
}
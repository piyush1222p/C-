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

        student(string name,int age){
            this->name = name;
            this->age = age;
            cout<<"Parameterized constructor called for student"<<endl;
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
    Teacher(string subject,double salary){
        this->subject = subject;
        this->salary = salary;
        cout<<"Parameterized constructor called for Teacher"<<endl;
    }
    Teacher(){
        cout<<"Default constructor called for Teacher"<<endl;
    }
};

class TeachingAssistant:protected student,protected Teacher{//Derived class that inherits from both student and teacher
    public:
        //default constructor
        TeachingAssistant(){
            cout<<"Default constructor called for TeachingAssistant"<<endl;
        }
        TeachingAssistant(string name,int age,double salary,string subject):student(name,age),Teacher(subject,salary){
            cout<<"Parameterized constructor called for TeachingAssistant"<<endl;
        }
        void getinfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Teaching Assistant Info Retrieved"<<endl;
        }
};
int main(){
    TeachingAssistant TA1("John Doe", 25, 50000, "Mathematics");
    TA1.getinfo();
}
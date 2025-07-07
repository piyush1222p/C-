#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    double gpa;

    public:
    Student(string name,int age,double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->age = obj.age;
        this->gpa = obj.gpa;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};
int main(){
    Student s1("Alice", 20, 3.8);
    s1.display();

    Student s2(s1);
    s2.display();
}
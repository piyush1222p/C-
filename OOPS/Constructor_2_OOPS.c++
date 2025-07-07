#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int age;
    double *gpaptr;

    Student(string name,int age, double gpa){// Parameterized constructor
        this->name = name;
        this->age = age;
        gpaptr = new double; // Dynamically allocate memory for gpa
        *gpaptr = gpa; // Assign the value to the allocated memory
    }

    /*Student(Student &obj){//shallow copy constructor
        this->name = obj.name;
        this->age = obj.age;
        this->gpaptr = obj.gpaptr;// Shallow copy of the pointer
    }*/

    Student(Student &obj){//deep copy constructor
        this->name = name;
        this->age = age;
        gpaptr = new double;// Dynamically allocate memory for gpa for the new object
        *gpaptr = *obj.gpaptr; // Deep copy of the GPA value
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << *gpaptr << endl;
    }
};
int main(){
    Student s1("Alice", 20, 3.8);
    Student s2(s1); // Using the copy constructor
    
    s1.display();
    cout<<"\n";
    *(s2.gpaptr) = 4.6;
    s1.display(); // Displaying s1 after modifying s2's GPA
    cout<<"\n";
    s2.name = "Neha"; // Changing the name of s2 to show that it does not affect s1
    s2.display(); // Displaying s2 to show the shallow copy effect
}
#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int age;
        double *gpaptr;
        string college;
    student(){// Default constructor
        college = "NIET"; // Default constructor assigns a default value to college
    }
    student(string name,int age,double gpa){// Parameterized constructor
        this->name=name;
        this->age=age;
        gpaptr = new double; // Dynamically allocate memory for GPA
        *gpaptr=gpa;
    }
    student(student &obj){// Copy constructor for deep copy
        this->name = obj.name;
        this->age = obj.age;
        gpaptr = new double;
        *gpaptr = *obj.gpaptr;
    }
    ~student(){// Destructor to free dynamically allocated memory
        delete gpaptr; // Destructor to free dynamically allocated memory for each student object
        cout << "Destructor called for " << name << endl;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << *gpaptr << endl;
        cout << "College: " << college << endl;
    }
};
int main(){
    student s1("Ankur",20,9.3);
    student s2(s1); // Using the copy constructor
    s1.display();
    cout << "\n";
    *(s2.gpaptr) = 4.6; // Modifying s2's GPA
    s1.display(); // Displaying s1 after modifying s2's GPA
    cout << "\n";
    s2.name = "Neha"; // Changing the name of s2 to show that
    // it does not affect s1
    s2.display(); // Displaying s2 to show the deep copy effect
}
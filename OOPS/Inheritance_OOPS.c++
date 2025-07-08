#include<iostream>
using namespace std;

// Base class: Person
class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() {
        cout << "Parent class (Person) default constructor called" << endl;
    }

    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Parent class (Person) parameterized constructor called" << endl;
    }

    // Destructor
    ~Person() {
        cout << "Person destructor called" << endl;
    }
};

// Derived class: Student inherits from Person
class Student : public Person {
public:
    int rollno;

    // Parameterized constructor with initializer list
    // Explicitly calls Person(string, int) constructor
    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
        cout << "Child class (Student) constructor called" << endl;
    }

    // Display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }

    // Destructor
    ~Student() {
        cout << "Student destructor called" << endl;
    }
};

// Main function to demonstrate constructor chaining and inheritance
int main() {
    // Creating Student object invokes:
    // 1. Person parameterized constructor
    // 2. Student constructor
    Student s1("John", 20, 101);

    // Display student info
    s1.display();

    // At end of scope, destructors are called in reverse:
    // 1. Student destructor
    // 2. Person destructor

    cout<<s1.name<<endl;
    return 0;
}

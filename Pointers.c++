#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Pointers in C++
    // =================

    /* Pointers are variables that store the memory address of other variables.
       Sometimes it is easier to work with addresses. */

    // & address-of Operator
    // * dereference Operator

    string name = "Piyush";
    int age = 20;
    string pizza[5] = {"Pizza_1", "Pizza_2", "Pizza_3", "Pizza_4", "Pizza_5"};

    string *pName = &name;
    int *pAge = &age;
    string *pPizza = pizza;

    // Accessing Memory Addresses
    // -------------------------

    cout << "Memory Addresses:" << endl;
    cout << "Name: " << pName << endl;
    cout << "Age: " << pAge << endl;
    cout << "Pizza: " << pPizza << endl;

    // Accessing Values using Pointers
    // ------------------------------

    cout << "\nValues:" << endl;
    cout << "Name: " << *pName << endl;
    cout << "Age: " << *pAge << endl;
    cout << "Pizza: " << *pPizza << endl;

    // Accessing Array Elements using Pointers
    // --------------------------------------

    cout << "\nArray Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Pizza_" << i + 1 << ": " << *(pPizza + i) << endl;
    }

    // Pointer Arithmetic
    int n=10;
    int n1=10;
    int *ptr = &n;
    int *ptr1 = &n1;

    //arithematic operation
    cout<<"Sum of two pointer: "<<*(ptr)+*(ptr1)<<endl;//sum of two pointer
    cout<<"Subtraction of two pointer: "<<*(ptr)-*(ptr1)<<endl;//subtraction of two pointer
    cout<<"Multiplication of two pointer: "<<*(ptr)**(ptr1)<<endl;//multiplication of two pointer
    cout<<"Division of two pointer: "<<*(ptr)/(*(ptr1))<<endl;//division of two pointer
    cout<<"Modulus of two pointer: "<<*(ptr)%*(ptr1)<<endl;//modulus of two pointer

    //comparision operation
    cout<<"Comparision of two pointer: "<<(*(ptr) == *(ptr1))<<endl;//comparision of two pointer
    cout<<"Comparision of two pointer: "<<(*(ptr) != *(ptr1))<<endl;//comparision of two pointer
    cout<<"Comparision of two pointer: "<<(*(ptr) > *(ptr1))<<endl;//comparision of two pointer
    cout<<"Comparision of two pointer: "<<(*(ptr) < *(ptr1))<<endl;//comparision of two pointer
    cout<<"Comparision of two pointer: "<<(*(ptr) >= *(ptr1))<<endl;//comparision of two pointer
    cout<<"Comparision of two pointer: "<<(*(ptr) <= *(ptr1))<<endl;//comparision of two pointer

    return 0;
}
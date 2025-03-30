#include <iostream>
int main()
{
    //sizeof() = It deetermines the size of the variable in bytes.
    //          Variables,data-type,class,objects,etc...
    
    int age = 20;
    double cgpa = 8.9;
    char grade = 'A';
    std::string name = "Piyush";
    bool isStudent = true;

    std::cout << "Size of int variable: " << sizeof(age) <<" bytes"<< std::endl;
    std::cout << "Size of double variable: " << sizeof(cgpa) <<" bytes"<< std::endl;
    std::cout << "Size of char variable: " << sizeof(grade) <<" bytes"<< std::endl;
    std::cout << "Size of string variable: " << sizeof(name) <<" bytes"<< std::endl;
    std::cout << "Size of boolian variable: " << sizeof(isStudent) <<" bytes"<< std::endl;

    std::string Student[] = {"Piyush","Anant","Aman"};
    std::cout << "Number of array variable: " << sizeof(Student)/sizeof(std::string) <<" bytes"<< std::endl;
    return 0;
}

/*Size of char = 1 byte
  Size of bool = 1 byte
  Size of short = 2 byte
  Size of int = 4 byte
  Size of long = 4 byte
  Size of long long = 8 byte
  Size of double = 8 byte
  Size of string = 32 byte*/
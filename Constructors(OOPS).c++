#include <iostream>
class Student{
    public:
        std::string name;
        int age;
        double gpa;
    
    //To create the constructor
    /*To create the constructor add the class name as the function called and fill with the same attributes as the public class is having*/
    Student(std::string name,int age,double gpa){
        this ->name=name;
        this ->age=age;
        this ->gpa=gpa;
        
        /*Constructor: Special method that is automatically called wehen an object is instantiated useful for assigning values to attributes as arguments*/
    }
};
int main(){
    Student S1("Piyush",20,9.5);
    Student S2("Anant",19,9.7);

    std::cout<<S1.name<<std::endl;
    std::cout<<S1.age<<std::endl;
    std::cout<<S1.gpa<<std::endl;

    std::cout<<"\n";

    std::cout<<S2.name<<std::endl;
    std::cout<<S2.age<<std::endl;
    std::cout<<S2.gpa<<std::endl;

    return 0;
}
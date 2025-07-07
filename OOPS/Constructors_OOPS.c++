#include <iostream>
using namespace std;
class Student{
    public:
        std::string name;
        int age;
        double gpa;
        string college;
    
    /*To create the constructor add the class name as the function called and fill with the same attributes as the public class is having{Parameterized Constructor}*/
    Student(){
        college = "NIET"; //Assigning a default value to the college attribute for default Constructor
    }
    Student(std::string name,int age,double gpa){//Parameterized constructor
        this ->name=name;
        this ->age=age;
        this ->gpa=gpa;
        /*this ->name=name; is used to differentiate between the class attribute and the parameter passed to the constructor*/
        
        /*Constructor: Special method that is automatically called wehen an object is instantiated useful for assigning values to attributes as arguments*/
    }
};
int main(){
    Student S1("Piyush",20,9.5);
    Student S2("Anant",19,9.7);

    cout<<S1.name<<endl;
    cout<<S1.age<<endl;
    cout<<S1.gpa<<endl;
    cout<<"College: "<<S1.college<<endl;

    cout<<"\n";

    cout<<S2.name<<endl;
    cout<<S2.age<<endl;
    cout<<S2.gpa<<endl;
    cout<<"College: "<<S2.college<<endl;

    return 0;
}
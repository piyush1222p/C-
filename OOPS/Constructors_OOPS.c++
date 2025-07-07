#include <iostream>
using namespace std;
class Student{
    public:
        std::string name = "";
        int age = 0;
        double gpa = 0.0;
        string college;
    
    /*To create the constructor add the class name as the function called and fill with the same attributes as the public class is having{Parameterized Constructor}*/
    Student(){//Default constructor
        college = "NIET"; //Assigning a default value to the college attribute for default Constructor
    }
    Student(std::string name,int age,double gpa){//Parameterized constructor
        this ->name=name;
        this ->age=age;
        this ->gpa=gpa;
        this ->college = "NIET";
        /*this ->name=name; is used to differentiate between the class attribute and the parameter passed to the constructor*/
        
        /*Constructor: Special method that is automatically called wehen an object is instantiated useful for assigning values to attributes as arguments*/
    }
    Student(Student &S){//Copy constructor
        this->name = S.name;
        this->age = S.age;
        this->gpa = S.gpa;
        this->college = S.college;
        /*Copy constructor: A copy constructor is a special type of constructor that initializes an object using another object of the same class.
        It is called when a new object is created from an existing object, as a copy of the existing object.
        It is used to create a new object that is a copy of an existing object, allowing for deep copying of objects.*/
    }

    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"GPA: "<<gpa<<endl;
        cout<<"College: "<<college<<endl;
    }
};
int main(){
    Student S1("Piyush",20,9.5);
    Student S2("Anant",19,9.7);
    Student S3;//Object created using default constructor
    Student S4(S1);//Object created using copy constructor

    //function call to getinfo() method
    cout<<"Details of Student 1: "<<endl;
    S1.getinfo();
    cout<<"\n";
    cout<<"Details of Student 2: "<<endl;
    S2.getinfo();
    cout<<"\n";
    cout<<"Details of Student 3: "<<endl;
    S4.getinfo();

    cout<<"\n";

    //Default constructor object access
    cout<<S3.name;
    cout<<S3.age<<endl;
    cout<<S3.gpa<<endl;
    cout<<S3.college<<endl;

    cout<<"\n";

    cout<<S2.name<<endl;
    cout<<S2.age<<endl;
    cout<<S2.gpa<<endl;
    cout<<S2.college<<endl;

    return 0;
}
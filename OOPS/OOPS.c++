#include <iostream>
class Human{
    public:
        std::string name;
        std::string occupation="Student";
        int age;

        void eat(){
            std::cout << name << " is eating" << std::endl;
        }
        void drink(){
            std::cout << name << " is drinking" << std::endl;
        }
        void sleep(){
            std::cout << name << " is sleeping" << std::endl;
        }
};
/*Here public class is used to get access the public members from within, as well as from outside of the class*/
int main(){
    Human h1,h2;

    h1.name = "Piyush";
    h1.age = 20;    //Here the value of the attribute is assigning because it is public accesed and it is not const

    h2.name = "Anant";
    h2.age = 19;

    std::cout<<h1.name<<std::endl;
    std::cout<<h1.age<<std::endl;
    std::cout<<h1.occupation<<std::endl;    //here the value of the attribute is accessing because it is public accesed and it is not const

    std::cout<<"\n";
    std::cout<<h2.name<<std::endl;
    std::cout<<h2.age<<std::endl;
    std::cout<<h2.occupation<<std::endl;

    std::cout<<"\n";

    h1.eat();
    h1.drink();
    h1.sleep();

    std::cout<<"\n";
    
    h2.eat();
    h2.drink();
    h2.sleep();

    /*here the h1 is invoked with the function to access the functio with the h1 attriutes*/
    return 0;
}
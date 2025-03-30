#include <iostream>
class Animal{
    public:
        std::string name;
        int age;
        bool alive = false;
    void eat(){
        std::cout<< "Animal is eating." << std::endl;
    }
};
class Dog:public Animal{    //Inheritance : Dog is inheriting from Animal that is why Dog is a subclass of Animal
    public:
        void bark(){
            std::cout<<"bhao-bhao"<<std::endl;
        }
};
class Cat:public Animal{
    public:
        void meow(){
            std::cout<<"meow-meow"<<std::endl;
        }
};
int main(){
    Dog d1;
    Cat c1;

    std::cout<<d1.alive<<std::endl;
    std::cout<<c1.alive<<std::endl;

    d1.bark();
    d1.eat();

    c1.meow();
    c1.eat();

    return 0;
}
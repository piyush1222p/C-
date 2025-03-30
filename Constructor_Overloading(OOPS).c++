#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    Pizza(std::string topping1){
        this->topping1=topping1;
    }
    Pizza(std::string topping1,std::string topping2){
        this->topping1=topping1;
        this->topping2=topping2;
    }
};

int main(){
    Pizza pizza_1("peperani");
    Pizza pizza_2("mushroom","paneer");

    std::cout<<pizza_1.topping1<<"\n";
    std::cout<<pizza_2.topping1<<"\n";
    std::cout<<pizza_2.topping2<<"\n";

    return 0;
}
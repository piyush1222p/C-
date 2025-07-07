#include <iostream>
class CAR{
    public:
        std::string name;
        std::string model;
        int year;

        void accelerate(){
            std::cout<<"Car Started"<<std::endl;
        }
        void brake(){
            std::cout<<"Car Stopped"<<std::endl;
        }
};
int main(){
    CAR car1,car2;

    car1.name = "BMW";
    car1.model = "M5";
    car1.year = 2018;

    std::cout<<"\n";


    car2.name = "Audi";
    car2.model = "Q3";
    car2.year = 2023;
    
    std::cout<<"\n";

    std::cout<<car1.name<<std::endl;
    std::cout<<car1.model<<std::endl;
    std::cout<<car1.year<<std::endl;
    
    std::cout<<car2.name<<std::endl;
    std::cout<<car2.model<<std::endl;
    std::cout<<car2.year<<std::endl;

    std::cout<<"\n";
    
    car1.accelerate();
    car1.brake();

    std::cout<<"\n";

    car2.accelerate();
    car2.brake();

    return 0;
}
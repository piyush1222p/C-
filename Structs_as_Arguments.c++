#include <iostream>
struct CAR
{
    std::string model;
    int year;
    std::string color;
};
void paintcar(CAR &car,std::string color);
void printcar(CAR &car);
int main(){
    CAR Car1;
    CAR Car2;

    Car1.model = "Mustang";
    Car1.year = 2015;
    Car1.color = "Red";

    Car2.model = "Audi";
    Car2.year = 2011;
    Car2.color = "Black";

    std::cout<<&Car1<<"\n";
    std::cout<<&Car2<<"\n";
    printcar(Car1); //same address due to & operator use
    printcar(Car2); //same address due to & operator use


    paintcar(Car1,"Blue");
    return 0;
}
void printcar(CAR &car){
    std::cout<<&car<<"\n";
    std::cout<<car.model<<"\n";
    std::cout<<car.year<<"\n";
    std::cout<<car.color<<"\n";
}
void paintcar(CAR &car,std::string color){
    car.color = color;
}
#include<iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car car);
int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Red";

    car2.model = "Ford";
    car2.year = 2022;
    car2.color = "Black";

    printCar(car1);
    printCar(car2);
    return 0;
}

void printCar(Car car){
    std::cout <<car.model <<'\n';
    std::cout <<car.year <<'\n';
    std::cout <<car.color <<'\n';
}
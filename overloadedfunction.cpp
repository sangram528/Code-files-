#include<iostream>
//Function overloading - Functions with same name but different parameters

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
int main(){
    bakePizza();                           //here output corresponding to the functions will be shown despite having same names
    bakePizza("pepperoni");
    bakePizza("pepperoni","mushrooms");

    return 0;
}

void bakePizza(){               //function with no parameters
    std::cout<<"Here is your pizza!\n"  ;
}

void bakePizza(std::string topping1){  //function with one parameter
    std::cout<<"Here is your pizza with "<<topping1<<" topping\n";
} 

void bakePizza(std::string topping1, std::string topping2){    //function with two parameters
    std::cout<<"Here is your pizza with "<<topping1<<" and "<<topping2<<"\n";
}
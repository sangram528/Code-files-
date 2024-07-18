#include<iostream>

int main(){
    //Switch is an alternative to using many "if-else" statements 
    //switch compares one value against many matching cases
    int month;
    std::cout<<"Enter the number of the month(1-5): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout<<"This is January";
            break;
        case 2:
            std::cout<<"This is February";
            break;
        case 3:
            std::cout<<"This is March";
            break;
        case 4:
            std::cout<<"This is April";
            break;
        case 5:
            std::cout<<"This is May";
            break;
        default:
            std::cout<<"Please enter the correct number value!";
            break;
    }
}
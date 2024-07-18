#include<iostream>

int main(){
    std::string name;
    while (name.empty()){             //repeats the process until the condition is met
        std::cout<<"Enter your name: ";
        std::getline(std::cin,name);

    }
    std::cout<<name;
    return 0;
}
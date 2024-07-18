#include<iostream>

int main(){
    int age;
    std::cout<<"Enter the age: "<<'\n';
    std::cin >> age;

    if(age >= 18){
        std::cout<< "You are allowed!"<<'\n';
    }
    else if(age<0){
        std::cout<<"You haven't been born yet"<<'\n';
    }
    else{
        std::cout<<"You are not allowed"<<'\n';
    }
    return 0;
}
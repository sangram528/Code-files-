#include<iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statement 
    //condition ? expression1 : expression2

    int age=19;
    age >=18 ? std::cout<<"You are ok \n":std::cout<<"You are not ok \n";
    int num = 5648949819;
    num%2 == 0 ? std::cout<<"EVEN":std::cout<<"ODD";
    return 0;
}
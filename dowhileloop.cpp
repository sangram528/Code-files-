#include<iostream>

int main(){
    //do while loop - do some block of code first, then repeat again if condition is true 
    int num;
    do{
        std::cout<<"Enter a positive number: ";
        std::cin >> num;
    }while(num<0);
    std::cout<<"This number is positive: "<< num;
    return 0;
}
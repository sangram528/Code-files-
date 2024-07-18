#include<iostream>
//area of a square

double square(double length);

int main(){
    double length = 5.0;
    std::cout<<square(length);

    return 0;
}

double square(double length){         //type of variable and function must be the same 
    return length * length;
}
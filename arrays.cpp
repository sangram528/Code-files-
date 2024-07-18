#include<iostream>

int main(){

    std::string car[] = {"BMW","Supra","Mustang"}; //arrays should be of the same datatype
    double prices[3];                   //if we declare an array first and then wait to fill in values later, we need to assign the size
    for(int i=0;i<3;i++){
        std::cout<<car[i]<<'\n';
    }

    prices[0] = 1500;
    prices[1] = 1200;
    prices[2] = 1300;
    for(int i=0;i<3;i++){
        std::cout<<prices[i]<<'\n';
    }

    return 0;
}
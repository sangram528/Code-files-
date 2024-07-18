#include<iostream>
#include<cmath>

int main(){
    double x;
    double y;
    
    std::cout<<"Enter the value of perpendicular:"<<'\n';
    std::cin>>x;
    std::cout<<"Enter the value of height:"<<'\n';
    std::cin>>y;
    double z;
    z = sqrt(pow(x,2)+pow(y,2));
    std::cout<<"The hypotenuse value is: "<<z<<'\n';
    return 0;

}
#include<iostream>
#include<cmath>

int main(){
    double x = 3;
    double y = 4;
    double z1 = std::max(x,y);
    std::cout<<z1<<'\n';
    double z2 = std::min(x,y);
    std::cout<<z2<<'\n';
    double z3 = pow (2,3);
    std::cout<<z3<<'\n';
    double z4 = sqrt(16);
    std::cout<<z4<<'\n';
    double z5 = abs(-3);
    std::cout<<z5<<'\n';
    //and some other
    //cmath contains other functions
    return 0;
}
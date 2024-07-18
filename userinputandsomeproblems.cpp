#include <iostream>

int main(){
    std::string name;
    std::cout<<"Name: "<<'\n';
    // std::cin>> name;
    std::getline(std::cin,name);          //for name with spaces 
    std::cout << "Hello " <<name <<'\n';
    return 0;
}
#include <iostream>

int main(){
    int num;
    std::cout<<"Enter a number: \n";
    std::cin>>num;
    if(num%2==0){
        std::cout<<"The number is even"<<'\n';
    }
    else{
        std::cout<<"The number is odd"<<'\n';
    }
    return 0;
}
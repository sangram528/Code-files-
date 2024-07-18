#include<iostream>
#include<ctime>

int main(){
    srand(time(NULL));
    int num = (rand()%6)+1;  //dice generator
    std::cout<<num;
    return 0;
}
#include<iostream>

void walk(int steps);

int factorial(int num);

int main(){

    //walk(100);
    std::cout<<factorial(5);
    return 0;

}


void walk(int steps){
    if(steps > 0){
        std::cout<<"You took a step!\n";
        walk(steps-1);
    }
}

int factorial(int num){
    if(num>1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }

}
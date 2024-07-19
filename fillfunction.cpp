#include<iostream>

int main(){
    //fill() - Fills a range of elements with a specified value 
    //format - fill(begin,end,value)
    const int SIZE = 99;
    std::string foods[SIZE];
    fill(foods,foods+(SIZE/3),"biriyani");
    fill(foods+(SIZE/3),foods+(2*SIZE/3),"fried rice");
    fill(foods+(2*SIZE/3),foods+SIZE,"chicken chap");
    for(std::string food:foods){
        std::cout<< food <<"\n";
    }
    return 0;
}
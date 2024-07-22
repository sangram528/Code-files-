#include<iostream>

int main(){
    //memory address - a location in memory that stores the data

    std::string name = "Sangram";
    
    std::cout<<"This is the memory address of "<<name<<": "<<&name<<'\n';
    return 0;
}
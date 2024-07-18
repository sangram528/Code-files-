#include<iostream>

int main(){
    //foreach loop - loop that traverses over an iterable dataset like arrays.
    std::string students[] = {"Sangram","Akash","Surojit","Vivek","Priyan","Reetom"};
    for(std::string i:students){ 
        std::cout<< i <<'\n';
    }
    return 0;
}
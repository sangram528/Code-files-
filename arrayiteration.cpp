#include<iostream>

int main(){
    std::string students[] = {"Sangram","Akash","Surojit","Vivek","Priyan","Reetom"};

    for(int i=0; i<(sizeof(students)/sizeof(std::string));i++){
        std::cout<<students[i]<<'\n';
    }
    return 0;
    
}
#include<iostream>

int main(){
    //sizeof() - determines the size in bytes of a variable, datatype, class, etc.
    double price = 1500;
    char grades[] = {'A','B','C','D'};
    std::string students[] = {"Spongebob","Patrick","Squidward"};

    std::cout<<sizeof(price)<<" bytes \n";

    std::cout<<"Number of elements in an array \n";

    std::cout<<sizeof(grades)/sizeof(grades[0])<<" elements\n";
    std::cout<<sizeof(grades)/sizeof(char)<<" elements\n";      //same thing
    std::cout<<sizeof(students)/sizeof(std::string)<<" elements\n";
    return 0;
}
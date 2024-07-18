#include<iostream>
//useful string methods
int main(){
    std::string name;
    std::cout<<"Enter your name: \n";
    std::getline(std::cin,name);
    std::cout<<"Length of string: "<<name.length()<<'\n';
    std::cout<<"Is it empty or not: "<<name.empty()<<'\n';
    std::cout<<"Append strings: "<<name.append("@gmail.com")<<'\n';
    std::cout<<"String indexing: "<<name.at(0)<<'\n';
    std::cout<<"Enter a character at the index: "<<name.insert(0,"@")<<'\n';
    std::cout<<"Find the index of whitespace: "<<name.find(' ')<<'\n';
    std::cout<<"Erase a portion of the string: "<<name.erase(0,3)<<'\n';
    //string class website has all the methods.
    return 0;
}
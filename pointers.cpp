#include<iostream>

int main(){

    //pointers - variable that stores a memory address of another variable 
    // & - address of operator 
    // * - dereference operator 

    std::string name = "Sangram";

    std::string *pName = &name;

    std::cout << pName <<'\n';    ///gives the address of the name variable
    std::cout << *pName << '\n';   ///gives the value at the address 

    return 0;


}
#include<iostream>

int main(){

    //null value - a special value that means something has no value 
    //when a pointer is holding a null value, it is not holding anything 
    //at all 
    //nullptr - keyword to represent null pointer literal 
    //used to determine if an address was successfully assigned to a pointer.
    
    int *pointer = nullptr;

    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned\n";
    }
    else{
        std::cout<<"Address was assigned\n";
    }

    return 0;



}
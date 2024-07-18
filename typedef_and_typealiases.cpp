#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;  //here the very big datatype was given a typedef pairlist_t so that it is easy to use. Please note that giving _t is helpful for identifying that it is typedef.    
typedef std::string str_t;
int main(){
    //typdef is reserved keyword used to create an additional name/ alias 
    // for another datatype 
    // New identifier for an existing type and helps with readibility and reduces typos
    pairlist_t pairlist;    //we defined pairlist variable with our typedef declaration rather than the big one. 
    str_t name = "Brother";
    std::cout<<name<<'\n';
    //typedef has now been replaced with the 'using' keyword.
    using num_t = int;
    num_t x = 5;
    std::cout<<x<<'\n';
    return 0;

    
}
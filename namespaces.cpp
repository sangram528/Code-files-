#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    // Namespace provides a solution for preventing name conflicts in large projects 
    // Each entity needs a unique name. A namespace allows for identically named entities 
    // as long as the namespaces are different.
    int x = 0;

    std::cout<<x<<'\n'; //this will display the value of x in the local main function 
    std::cout<<first::x<<'\n';    //this will display the value of x in the namespace first
    std::cout<<second::x<<'\n';   //this will display the value of x in the namespace second
    
    using namespace first;    //this is a declaration that points only to the namespace first
    std::cout<<"This will display the value of x in first namespace without explicitly mentioning it "<<x<<'\n';   
    //for displaying the namespace second we still need to specify it 
    //the same goes for the second namespace too           
    using namespace std;      // this will enable it such that we dont need to define std::string or std::cout we could directly write string or cout
    // this has some problems as there are many entities in std and can cause collision 
    // a safer solution to this is this 
    using std::cout;
    using std::string;
    return 0;
}
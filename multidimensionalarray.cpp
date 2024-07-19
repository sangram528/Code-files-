#include<iostream>
//two dimensional array format - array[rows][columns]. 
//We dont necessarily need a row size to be set. But we do need to set the columns size.
int main(){
    std::string cars[][3] = {{"Mustang","Escape","F-150"},
                            {"Corvette","Equinox","Silverado"},
                            {"Challenger","Durango","Ram 1500"}};
    
    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<"\n";
    }

    return 0;
}
#include<iostream>

//write a function to calculate the sum of the numbers in the array 

double getTotal(double prices[], int size);      
int main(){
    double prices[] = {400,500,678,985,989};
    int size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices,size);
    std::cout<<"Rs. "<<total;
    return 0;
}

double getTotal(double prices[],int size){
    double total = 0;

    for(int i=0;i<size;i++){
        total += prices[i];
    }
    return total;

}
#include<iostream>

//write a function to search for an element in an array 
//Linear search 
int searchArray(int numbers[],int size, int num);

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(int);
    int num;
    int index;
    std::cout<<"Enter the number you are looking for: \n";
    std::cin>>num;
    index = searchArray(numbers,size,num);
    if(index>0){
        std::cout<<"The number was found at "<<index<<"th index \n";
    }
    else{
       std::cout<<"The number was not present in the array";
    }
    return 0;

}

int searchArray(int numbers[],int size, int num){
    for(int i=0;i<size;i++){
        if(numbers[i]==num){
            return i;
        }
    }
    return -1;
}

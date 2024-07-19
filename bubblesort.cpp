#include<iostream>

///bubble sort 

void ascendingsort(int array[], int size);
void descendingsort(int array[], int size);
int main(){

    int array[5];
    int size = sizeof(array)/sizeof(array[0]);
    std::cout<<"Enter the elements of array: \n";
    for(int i=0;i<size;i++){
        std::cout<<"Index "<<i<<":\n";
        std::cin>>array[i];
    }
    std::cout<<"\nOriginal Array: \n";
    for(int j:array){
        std::cout<< j<< " ";
    }
    ascendingsort(array,size);
    std::cout<<"\nArray sort in ascending order \n";
    for(int element:array){
        std::cout<< element<< " ";
    }

    descendingsort(array,size);
    std::cout<<"\nArray sort in descending order \n";
    for(int element:array){
        std::cout<< element<< " ";
    }

    return 0;
}

void ascendingsort(int array[], int size){

    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

void descendingsort(int array[], int size){

    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]<array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}
#include <MyClass.hpp>
#include <iostream>

void printArr(int *arr,int size){     
    
     for (int i = 0; i < size; i++)
    {    
        std::cout<<arr[i]<<" ";
    }  

    std::cout<<std::endl;
    
}

int main () {
    // WHen 0 is considerate Null    
    int arr[20] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    std::cout<<"Firts arr"<<std::endl;
    printArr(arr,20);
   
    fibonacci operation;

    for (int i = 1; i < 18; i++)
    {
       std::cout<<(operation.fib(i,arr))<<std::endl;
    }
    
    std::cout<<"Final arr"<<std::endl;
    printArr(arr,20);
    
}
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
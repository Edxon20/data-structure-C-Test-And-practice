#include "../header/MyClass.h"
#include <iostream>

int fibonacci::fib(int n,int* memo){    
    int result;

    if(memo[n] != 0){
        return memo[n];
    }

    if(n==1 || n==2){
        result = 1;
    }else{
        result = fib(n-1,memo) +fib(n-2,memo);
    }

    memo[n] = result;
    return result;
}

void operations::printArr(int *arr, int size){
    for (int i = 1; i < size; i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    
}
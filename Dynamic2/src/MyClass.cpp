#include "MyClass.hpp"
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
  

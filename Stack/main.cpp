#include <iostream>
#include <stack>

using namespace std;

void printStackElements(stack<int> stack) {

    while(!stack.empty()){
        cout<<stack.top()<<endl;        
        stack.pop();
    }
    cout<<endl;
}

int main () {

    //Principal functions:
    //empty, size, push, pop, top
    stack<int> numbersStack;

    if(numbersStack.empty()){
        cout << "Stack is empty";
    }else{
        cout << "Stack is not empty";
    }

    cout<<endl;

    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.push(4);
    numbersStack.push(5);
    numbersStack.push(6);

    cout<<"Stack size is: ";
    cout<<numbersStack.size()<<endl;

    numbersStack.pop();

    cout<<"Top is: "<<numbersStack.top()<<endl;
    cout<<"The element in the stack are: "<<endl;
    printStackElements(numbersStack);
    

    return 0;
}
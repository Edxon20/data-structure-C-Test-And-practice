#include <iostream>
using namespace std;

    void printNumber(int* numberPtr){
        cout<<*numberPtr<<endl;
    }

    void printLetter(char* charPtr){
        cout<<*charPtr<<endl;
    }


int main () {

   int number = 5;
    char letter = 'a';

    printNumber(&number);
    printLetter(&letter);


    return 0;
}
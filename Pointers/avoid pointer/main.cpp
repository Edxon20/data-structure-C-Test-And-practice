#include <iostream>
using namespace std;

    void printNumber(int* numberPtr){
        cout<<*numberPtr<<endl;
    }

    void printLetter(char* charPtr){
        cout<<*charPtr<<endl;
    }
    // A general way to print

    void print(void* ptr, char type ){
        switch(type){
            case 'i': cout<< *((int*)ptr) <<endl; break;
            case 'c': cout<< *((char*)ptr) <<endl; break;
        }        
    }


int main () {

   int number = 5;
    char letter = 'a';

    // printNumber(&number);
    // printLetter(&letter);
    cout<<&number<<endl;

    print(&number, 'i');
    print(&letter, 'c');
    


    return 0;
}
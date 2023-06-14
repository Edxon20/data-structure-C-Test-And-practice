#include <iostream>
using namespace std;

int main () {

    //PTR

    // direction --- direction to appoint
    // The principal variable must be same type to pointer. int -- int not int -- float or reverse.

    int n = 5;
    cout<< &n << endl;

    int* ptr = &n;
    cout<< ptr << endl;
    cout<< *ptr << endl;

    *ptr = 10;

    cout<< *ptr <<endl;    
    cout<< n <<endl;    

    //Error
    // int* ptr2;
    // *ptr2 = 7;

    int v;
    int* ptr2 = &v;
    *ptr2 = 3;
    cout <<"v: " << v << endl;




    return 0;
}
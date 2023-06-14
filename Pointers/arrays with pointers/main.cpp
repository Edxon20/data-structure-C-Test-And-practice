#include <iostream>
using namespace std;

int main () {

    // int luckyNumber[5] = {1,2,3,4,5};

    // cout<<luckyNumber<<endl;
    // cout<<&luckyNumber[0]<<endl;

    // cout<<luckyNumber[2]<<endl;
    // cout<<*(luckyNumber+2)<<endl;

    // int size = sizeof(luckyNumber) / sizeof(luckyNumber[0]);
    
    // Number of elements = sizeof(luckyNumber) / sizeof(luckyNumber[0])
    // = 20 bytes / 4 bytes
    // = 5 elements

    int luckyNumber[5];

    for (int i = 0; i <= 4; i++)
    {
        cout<< "Number: ";
        cin>> luckyNumber[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout<< *(luckyNumber)+i<< " ";
    } 

    return 0;
}
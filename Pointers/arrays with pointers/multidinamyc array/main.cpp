#include <iostream>
using namespace std;

int main () {

     int rows, cols;

     rows = 3;
     cols = 3; 

     int **table = new int* [rows]; 

     for (int i = 0; i < rows; i++)
     {
        table[i] = new int[cols];
     }

     table[2][2] = 5;
     cout<<table[2][2]<<endl;

     for (int i = 0; i < rows; i++)
     {
        delete table[i];
     }

     delete table;  


    return 0;
}
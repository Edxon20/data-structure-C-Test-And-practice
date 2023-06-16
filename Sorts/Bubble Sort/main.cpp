#include <iostream>

using namespace std;


int main () {    

    int arr[] = {9,1,3,4,66};
    int aux;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i] < arr[j]){
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    
    
    

    return 0;
}
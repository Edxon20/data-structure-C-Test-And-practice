#include <iostream>

using namespace std;


int main () {    

    //Selection sort algorithm using an array of random numbers 
    //with repeated numbers, and with positive and negative numbers

    int arr[] = {5, 25, -3, -8, 0, 5, -3, 9, -1, 7, -5, -2, 6, 3, 0, -8, -1, 25, 4, -3, 2, -5, 7, 4, -2};    
    int cont = 0;
    int contAux = 25;
                                    //25 is the size of the array
    for (int i = 0; i<25; i++)
    {
        for (int j = cont; j < 25; j++)
        {
            if(i==j){
                continue;
            }

            if(arr[i] <= arr[j]){
                contAux -= 1;
            }else{
                break;
            }
        }
        if(contAux == cont+1){
            contAux = arr[cont];
            arr[cont] = arr[i];
            arr[i] = contAux;
            contAux = 25;
            cont+=1;
            i=cont;
            continue;
        }      

        contAux=25;  
    }
    

    for (int i = 0; i < 25; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    

    return 0;
}
#include <iostream>

using namespace std;


int main () {    

   int arr[] = {9, 8, 5, 3, 4};
    int aux;

    for (int i = 1; i < 5; i++) {
        aux = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = aux;
    }

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
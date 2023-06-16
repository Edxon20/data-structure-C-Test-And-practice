#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 10, 1, 3};
    
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 6 - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 6; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }  
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

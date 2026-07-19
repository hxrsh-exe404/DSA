#include <iostream>
using namespace std;

// Function to print array elements.
//
// Default Argument:
// start = 0 means if the caller does not pass the
// third argument, printing starts from index 0.
//
// Rule:
// Default arguments are assigned from RIGHT to LEFT,
// so only the rightmost parameters can have default values.
void print(int arr[], int n, int start = 0) {

    // Print array elements starting from 'start' index
    for (int i = start; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // Third argument is omitted.
    // Compiler automatically uses:
    // start = 0
    print(arr, size);

    cout << endl;

    // Here start = 2 is explicitly passed,
    // so printing begins from index 2.
    print(arr, size, 2);

    return 0;
}
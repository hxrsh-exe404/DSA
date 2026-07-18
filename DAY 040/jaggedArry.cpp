#include <iostream>
using namespace std;

int main() {

    // Take number of rows from the user
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    // Create an array of pointers (each pointer represents one row)
    int **arr = new int*[row];

    // Create an array to store the number of columns for each row
    int *col = new int[row];

    // Allocate memory for each row and take input
    for (int i = 0; i < row; i++) {

        // Take the number of columns for the current row
        cout << "Enter number of columns for row " << i + 1 << ": ";
        cin >> col[i];

        // Allocate memory for the current row
        arr[i] = new int[col[i]];

        // Take input for the current row
        cout << "Enter " << col[i] << " elements: ";
        for (int j = 0; j < col[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the jagged array
    cout << "\nJagged Array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Release memory allocated for each row
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }

    // Release memory for the array of pointers
    delete[] arr;

    // Release memory for the column size array
    delete[] col;

    return 0;
}
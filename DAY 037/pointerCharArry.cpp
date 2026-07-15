#include<iostream>
using namespace std;

int main(){

    // Integer Array
    int arr[5] = {1,2,3,4,5};

    // Character Array (Automatically '\0' at the end)
    char ch[6] = "abcde";

    // ---------------------------------------------------------
    // Array name stores the address of the first element.
    // But cout behaves differently for int[] and char[].
    //
    // int array  -> prints address
    // char array -> prints complete string until '\0'
    // ---------------------------------------------------------

    cout << "INT Array first location address --> " << arr << endl;
    cout << "CHAR Array Content --> " << ch << endl;

    // Pointer pointing to first element of integer array
    int *p = &arr[0];

    // Printing array name again (same as &arr[0])
    cout << arr << endl;

    // Pointer pointing to first character of character array
    char *c = &ch[0];

    // Prints entire string because c points to first character
    // and cout continues until it finds '\0'
    cout << c << endl;

    // ---------------------------------------------------------
    // Character Pointer Example
    // ---------------------------------------------------------

    char temp = 'z';
    char *q = &temp;

    // Undefined Behaviour
    // cout treats q as the starting address of a string.
    // Since there is NO '\0' after 'z', it keeps printing
    // random characters until a null character is found.
    cout << q << endl;

    return 0;
}
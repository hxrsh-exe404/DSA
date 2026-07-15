#include<iostream>
using namespace std;

// -----------------------------------------------------
// Passing Pointer to Function
// -----------------------------------------------------
void print(int *p){

    // Prints address stored inside pointer
    cout << "Address --> " << p << endl;

    // Dereferencing pointer to print actual value
    cout << "Value --> " << *p << endl;
}

// -----------------------------------------------------
// Pointer Update vs Value Update
// -----------------------------------------------------
void update(int *p){

    // ------------------------------
    // Case 1: Updating Pointer
    // ------------------------------
    // p = p + 1;
    // This only changes the local copy of pointer.
    // Original pointer in main() remains unchanged.

    // cout << "Inside --> " << p << endl;


    // ------------------------------
    // Case 2: Updating Value
    // ------------------------------
    // *p accesses the actual variable,
    // so its value gets modified.
    *p = *p + 1;
}

// -----------------------------------------------------
// Array as Function Parameter
// arr[] and int *arr are exactly the same here.
// -----------------------------------------------------
int getSum(int arr[] /* same as int *arr */, int n){

    // Arrays decay into pointers when passed to functions.
    // Hence sizeof(arr) gives size of pointer,
    // NOT size of complete array.
    cout << "Size of array --> " << sizeof(arr) << endl;

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){

    int value = 5;

    // Pointer storing address of value
    int *p = &value;

    /*
    // Function to print pointer details
    print(p);

    cout << "Before --> " << p << endl;

    // Pointer address won't change in main()
    update(p);

    cout << "After --> " << p << endl;
    */

    // Before updating value
    cout << "Before value --> " << *p << endl;

    // Value gets incremented through pointer
    update(p);

    // After updating value
    cout << "After value --> " << *p << endl;


    // Integer Array
    int arr[6] = {1,2,3,4,5,8};

    // Passing array to function
    // Internally it behaves like passing &arr[0]
    cout << "Sum --> " << getSum(arr,5) << endl;
    
    cout<<"Sum --> "<<getSum(arr+3,3)<<endl;

    return 0;
}
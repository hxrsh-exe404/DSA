#include<iostream>
using namespace std;

// Function to understand double pointers
void update(int **p2){

    // This will NOT work because only the local copy of p2 changes.
    // It does not affect the original pointer in main().
    // p2 = p2 + 1;

    // Move the pointer 'p' to the next memory location.
    // Since *p2 stores the address of p, this changes p itself.
    *p2 = *p2 + 1;

    // Increase the value pointed to by p.
    // (**p2) means the actual integer value.
    **p2 = **p2 + 1;
}

int main(){

    int i = 5;      // Normal integer
    int *p = &i;    // Pointer storing address of i
    int **p2 = &p;  // Double pointer storing address of p

/*---------------------------------------------------------
    Basic Understanding of Double Pointer
----------------------------------------------------------*/

    cout << endl << "All Clear" << endl << endl;

    // Address stored inside p (Address of i)
    cout << "Printing p --> " << p << endl;

    // Address of pointer p
    cout << "Printing p address --> " << &p << endl;

    // Address stored inside p2 (Address of p)
    cout << "Printing p2 --> " << p2 << endl;

    // Address of double pointer p2
    cout << "Printing p2 address --> " << &p2 << endl << endl;

    // Dereferencing p2 gives pointer p
    cout << "Printing *p2 --> " << *p2 << endl;

    // Double dereference gives value of i
    cout << "Value --> " << **p2 << endl;

    // Value using pointer p
    cout << "Value --> " << *p << endl;

    // Direct value of i
    cout << "Value --> " << i << endl << endl;

    // All three print address of i
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl << endl;

    // Both print address of pointer p
    cout << &p << endl;
    cout << p2 << endl;


/*---------------------------------------------------------
    Function Call Demonstration
----------------------------------------------------------*/

    cout << endl << endl;

    // Initial value of i
    cout << "Before --> " << i << endl;

    // Initial address stored in p
    cout << "Before --> " << p << endl;

    // Initial address stored in p2
    cout << "Before --> " << p2 << endl;

    // Passing double pointer
    update(p2);

    cout << endl;

    // Value after update()
    cout << "After --> " << i << endl;

    // Pointer after update()
    cout << "After --> " << p << endl;

    // Double pointer remains same
    cout << "After --> " << p2 << endl;

    cout << endl << endl;

    return 0;
}
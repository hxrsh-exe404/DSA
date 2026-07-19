#include <iostream>
using namespace std;

/*---------------- Pass by Value ----------------
A copy of the original variables is passed.
Any changes made inside the function do NOT affect
the original variables.

Disadvantage:
- Extra copy of arguments is created.
- Can reduce performance for large objects.
------------------------------------------------*/

void fun(int a, int b) {
    a++;
    b++;
    cout << endl << a << " " << b << endl;
}

/*
int main() {
    int a = 1, b = 2;
    fun(a, b);

    return 0;
}
*/


// Pass by Value
// int getMax(int a, int b)
// -> Copies both variables.

// Pass by Reference
// int getMax(int& a, int& b)
// -> No copies are created.
// -> Function directly accesses original variables.
// -> More efficient for large objects.

// inline is a request to the compiler to replace
// the function call with the function body.
// This helps avoid function call overhead for
// very small and frequently used functions.

inline int getMax(int& a, int& b) {
    return (a > b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0;

    /*
    if (a > b) {
        ans = a;
    }
    else {
        ans = b;
    }
    */

    // Function call
    // Compiler may replace this with:
    // ans = (a > b) ? a : b;
    // because getMax() is declared inline.
    ans = getMax(a, b);

    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    // Reusing the same logic through a function
    // instead of writing the ternary operator again.
    ans = getMax(a, b);

    cout << ans << endl;
}
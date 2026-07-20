#include<iostream>
using namespace std;

int stairs(int n){
    // base case -->
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    // recursive relation -->
    return stairs(n-1)+stairs(n-2);
}

int main() {
    // Number of stairs
    int n = 8;

    // Calculate total possible ways
    int ways = stairs(n);

    // Display the result
    cout <<endl<< "Total ways to climb " << n << " stairs = " << ways << endl;

    return 0;
}
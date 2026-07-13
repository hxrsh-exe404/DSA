#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
    int result = 1;

    while(n > 0){
        if(n & 1){
            result = (1LL * result * x) % m;
        }
        x = (1LL * x * x) % m;
        n = n >> 1;
    }
    return result;
}

int main(){
    int x = 2, n = 10, m = 1000;
    cout << modularExponentiation(x, n, m);

    return 0;
}
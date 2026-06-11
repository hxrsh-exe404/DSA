#include <iostream>
using namespace std;
int main()
{
    int n, r = 0;
    cout << "enter a no. : ";
    cin >> n;
    while (n != 0)
    {
        // 1st method
        /*  int r = n % 10;
            n = n / 10;
            rev = r;
            cout << rev;
        */
        // 2nd method
        int ld = n % 10;
        r = r * 10;
        r = r + ld;
        n = n / 10;
    }
    cout << r;
}
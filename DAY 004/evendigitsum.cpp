#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter a no. : ";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        int r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
    }
    cout << sum << " ";
}
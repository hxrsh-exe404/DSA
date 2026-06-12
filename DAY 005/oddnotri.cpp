#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "enter row : ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << 2 * j - 1 << " ";
        }
        cout << endl;
    }
}


// another method
/*



    for(int i=1;i<=row;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a=a+2;
        }cout<<endl;
    }



*/
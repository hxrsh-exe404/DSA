#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter The Character : ";
    cin >> ch;
    if (ch>='a' && ch<='z'){
        cout << "This is Lowercase Character"<<endl;
    }
    else if (ch>='A' && ch<='Z'){
        cout << "This is Uppercase Character"<<endl;
    }
    else if (ch>='0' && ch<='9'){
        cout<<"This is Number Character"<<endl;
    }
    else{
        cout<<"This is a Special Character"<<endl;
    }
}
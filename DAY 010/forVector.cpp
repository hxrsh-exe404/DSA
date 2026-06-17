#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    for (char val : vec) // for each loop
    {
        cout << val << endl;
    }
}
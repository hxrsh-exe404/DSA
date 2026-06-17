#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout << "Vector Size : " << vec.size() << endl;
    cout << "Vector Capacity : " << vec.capacity() << endl; // capacity goes to double
}
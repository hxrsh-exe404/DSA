#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    cout << "size = " << vec.size() << endl; // size function of vector
    for (char val : vec)
    {
        cout << val << endl;
    }

    // push back function
    cout << endl;
    vec.push_back('h');
    vec.push_back('i');
    cout << "size = " << vec.size() << endl;
    for (char val : vec)
    {
        cout << val << endl;
    }

    // pop back function
    cout << endl;
    vec.pop_back();
    vec.pop_back();
    cout << "size = " << vec.size() << endl;
    for (char val : vec)
    {
        cout << val << endl;
    }

    // vec.front() & vec.back() ----> return front an dback value
    cout << "Front value = " << vec.front() << endl;
    cout << "Back value = " << vec.back() << endl;

    // vec.at(0) same as vec[0]
    cout << vec.at(0);
}
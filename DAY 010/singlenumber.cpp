#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 1, 2, 3, 4};
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    cout << "Single Number = " << ans << endl;
}
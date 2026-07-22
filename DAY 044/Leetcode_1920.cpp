#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {

    vector<int> ans(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter permutation array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = buildArray(nums);

    cout << "New Array: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {

    for (int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    return nums;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = runningSum(nums);

    cout << "Running Sum Array: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
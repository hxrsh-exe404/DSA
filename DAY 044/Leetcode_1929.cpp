#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]);
    }

    return ans;
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

    vector<int> ans = getConcatenation(nums);

    cout << "Concatenated Array: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
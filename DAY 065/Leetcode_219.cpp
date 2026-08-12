#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> lastIndex;

    for (int i = 0; i < nums.size(); i++) {

        if (lastIndex.find(nums[i]) != lastIndex.end()) {
            if (i - lastIndex[nums[i]] <= k)
                return true;
        }

        lastIndex[nums[i]] = i;
    }

    return false;
}

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter k: ";
    cin >> k;

    if (containsNearbyDuplicate(nums, k))
        cout << "true";
    else
        cout << "false";

    return 0;
}
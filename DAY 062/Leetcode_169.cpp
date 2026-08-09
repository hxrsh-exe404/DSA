#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> freq;

    // Har number ki frequency count karo
    for (int num : nums) {
        freq[num]++;
    }

    // Majority element find karo
    for (auto x : freq) {
        if (x.second > nums.size() / 2) {
            return x.first;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = majorityElement(nums);

    cout << "Majority Element = " << ans << endl;

    return 0;
}
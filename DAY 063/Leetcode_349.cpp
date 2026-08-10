#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> st(nums1.begin(), nums1.end());
    vector<int> ans;

    for (int num : nums2) {
        if (st.find(num) != st.end()) {
            ans.push_back(num);
            st.erase(num);
        }
    }

    return ans;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> ans = intersection(nums1, nums2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
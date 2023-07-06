#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
    // Write your code here.
    // Time complexity of O(n)
     vector<int> ans;
     int maxElement = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (elements[i] > maxElement) {
            ans.push_back(elements[i]);
            maxElement = elements[i];
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

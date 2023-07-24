class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();

        int i = 0;
        int j = 0;
        vector<int> mergeArr;

        while (i < len1 && j < len2) {
            if (nums1[i] < nums2[j]) {
                mergeArr.push_back(nums1[i]);
                i++;
            } else {
                mergeArr.push_back(nums2[j]);
                j++;
            }
        }

        while (i < len1) {
            mergeArr.push_back(nums1[i]);
            i++;
        }

        while (j < len2) {
            mergeArr.push_back(nums2[j]);
            j++;
        }

        int n = len1 + len2;
        double ans;
        int mid = n / 2;
        if (n % 2 == 0) {
            ans = (mergeArr[mid] + mergeArr[mid - 1]) / 2.0;
        } else {
            ans = mergeArr[mid];
        }
        return ans;
    }
};

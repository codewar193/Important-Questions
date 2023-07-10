class Solution {
public:

  //Method-1
    // int findKthLargest(vector<int>& nums, int k) {
    //     int n = nums.size()-1;
    //     sort(nums.begin(),nums.end());
    //     return nums[n-k+1];
    // }

 //Method-2
     int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int>pq(nums.begin(),nums.end());
        int ans;

        while(k--)
        {
            ans = pq.top();
            pq.pop();
        }
      return ans;

    }
};

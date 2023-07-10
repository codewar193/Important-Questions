class Solution {
public:

  //Method-1//TC:O(nlogn)
    // int findKthLargest(vector<int>& nums, int k) {
    //     int n = nums.size()-1;
    //     sort(nums.begin(),nums.end());
    //     return nums[n-k+1];
    // }

//Method-2//TC:O(n) using Max heap
    //  int findKthLargest(vector<int>& nums, int k) {

    //     priority_queue<int>pq(nums.begin(),nums.end());
    //     int ans;

    //     while(k--)
    //     {
    //         ans = pq.top();
    //         pq.pop();
    //     }
    //   return ans;

    // }

    //Method-3//TC:O(nlogn) using min heap

        int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int , vector<int> , greater<int>>pq;

        for(auto n: nums)
        {
          pq.push(n);
          if(pq.size()>k)
          {
            pq.pop();
          }
        }
        return pq.top();


    }
};

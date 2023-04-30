/*
program to find all the missing elements in the given range. we have two inputs: • an array of integers • the start value and end value of the range for example, 
consider the array: arr = {1, 2, 3, 8, 9}. the start value is 1 and the end value is 5. this means the range is 1 to 5. here the missing elements are 4 and 5.
*/



class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int range = nums.size();
        sort(nums.begin(),nums.end());

        for(int i =1 ;i<= range;i++)
        {
          if(!binary_search(nums.begin(),nums.end(),i))
          {
              ans.push_back(i);
          }
        } 

        return ans;
    }
};

main(){
   Solution ob;
   vector<int> v{4,3,2,7,8,2,3,5};
   print_vector(ob.findDisappearedNumbers(v));
}

/*
Given n ropes of different lengths, connect them into a single rope with minimum cost. Assume that the cost to connect two ropes is the same as the sum of their lengths.

For example,

Input:  [5, 4, 2, 8]

 
Output: The minimum cost is 36
  
[5, 4, 2, 8] –> First, connect ropes of lengths 4 and 2 that will cost 6.
[5, 6, 8]    –> Next, connect ropes of lengths 5 and 6 that will cost 11.
[11, 8]      –> Finally, connect the remaining two ropes that will cost 19.
 
Therefore, the total cost for connecting all ropes is 6 + 11 + 19 = 36.*/
// Time complexity: O(log n) for a given number n

// Auxiliary Space: O(n)

#include <iostream>
#include <set>
using namespace std;


class Solution {
public:

int getNextnum(int n){
      
      int sum =0;
          while(n>0)
          {
            int a = n%10;
            sum+= a*a;
            n = n/10;
          }

          return sum;


}
    bool isHappy(int n) {
      set<int> temp;
        
        while(n!=1 && temp.find(n)==temp.end()){
          temp.insert(n);
          n = getNextnum(n);
        }
       
    
   if(n==1)return true;

   return false;
    }
    
};

int main() {
    Solution sol;
    int num = 19;
    bool is_num_happy = sol.isHappy(num);
    std::cout << "Is " << num << " a happy number? " << (is_num_happy ? "Yes" : "No") << std::endl;
    return 0;
}

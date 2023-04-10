
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

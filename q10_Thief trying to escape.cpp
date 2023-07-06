//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int totalJumps(int X, int Y, int N, int arr[]){
        // code here
        
        int count =0;
        
        for(int i =0;i<N;i++)
        {
            
                count = count+1;
            
                while(arr[i]>X)
                {
                    arr[i] = arr[i] -(X-Y);
                    count++;
                }
            
        }
        return count;
    }
};

//method -2

/*
class Solution{
public:
    int totalJumps(int X, int Y, int N, int arr[]){
        int count = 0;
        
        for(int i = 0; i < N; i++)
        {
            if(arr[i]<=X){
               count++;
            continue;
           }
                int diff = arr[i] - Y;
                int jumps = diff / (X-Y);
                count += jumps;
                
                if(diff % (Y - X) != 0)
                    count++;
            
        }
        
        return count;
    }
};
*/

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, N;
        cin>>X>>Y>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.totalJumps(X, Y, N, arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends

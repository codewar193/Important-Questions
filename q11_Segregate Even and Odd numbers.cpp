  class Solution {
public:
    void segregateEvenOdd(int arr[], int n) {
        
        
     sort(arr,arr+n);
     int eve=0;

    for(int i=0;i<n;i++){
     if(arr[i]%2==0)
    {
      swap(arr[eve],arr[i]);
       eve++;
     }  
       
   }
   sort(arr+eve,arr+n);
}
    
};

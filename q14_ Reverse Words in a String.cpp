//method-1 TC-O(n) SC-O(1)

class Solution {
public:
    string reverseWords(string s) {
        
     int space = 0;
     string result = "";
     int n = s.length();
   
     while(space<n)
     {
       while(space<n && s[space]==' ')
       {
           space++;
       }
       if(space>=n)break;

        int  skipspace = space + 1;

        while(skipspace<n && s[skipspace]!=' ')
       {
           skipspace++;
       }

       string sub = s.substr(space,skipspace-space);
       if(result.length() == 0) result = sub;
       else result = sub + " " + result;

       space = skipspace+1;
     }
     return result;
    }
};

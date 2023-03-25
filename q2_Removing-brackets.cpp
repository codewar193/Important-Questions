/*In a mathematics class, Jason the mathematics teacher asked to solve a book of   expressions consisting of characters, operators, and brackets. 
But Jason wants to give simplified expressions by removing brackets from the expressions. Write an algorithm to help Jason simplify an expression by
removing brackets
Input:  x-(p+q)+(y-a)

Output:  x-p-q+y-a
*/
// Program to remove brackets from an algebraic string

#include<bits/stdc++.h>

using namespace std;
int remove_brackets(char ch)
{
    if (ch == '(' || ch ==')')
    return 1;
    else
    return 0;
}
int main()
{
    string s;
    int j=0;
    cout<<"Enter the String:";
    cin>>s;
    int len = 0;
    while (s[len])
    len++;
    char t[len];
    for(int i=0; i< len; i++)
    {
      int temp = remove_brackets(s[i]);
      if (temp == 0)
      {
        t[j] += s[i];
        j++;
      }
    }
cout<<t;
return 0;
}


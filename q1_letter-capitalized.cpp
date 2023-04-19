/*Program to capitalize first and last letter of each word in a line. The basic algorithm is to keep track of the spaces and capitalize the letter before the space and after space. The first letter and the last letter of the given line should be capitalized.
  There are only a few things that need to be considered:
•  More than one occurrence of spaces between two words.
•  There can be a single word like 'a' that needs to be capitalized.
•  There may be two words like "me" where both letters must be capitalized.
Input:  kiit university
Output: KiiT UniversitY*/

#include<stdio.h>
#include<conio.h>
#include <ctype.h>
#include<string.h>
int main() 
{
  //Initializing variables
  char str[100] = "str ing";
  int length = 0;
  
  //Calculating length.
  length = strlen(str);
  for(int i=0;i<length;i++)
  {
      if(i==0||i==(length-1)) //Converting character at first and last index to uppercase.
      {
          str[i]=toupper(str[i]);
      }
      else if(str[i]==' ') //Converting characters present before and after space to uppercase.
      {
          str[i-1]=toupper(str[i-1]);
          str[i+1]=toupper(str[i+1]);
      }
  }
  
  //Printing result.
  printf("String after capitalizing first and last letter of each word:\n%s", str);
  return 0;
}

#include <stdio.h> 
#include <string.h> 
int main() 
{ 
 char str[200]; 
 int i, j, start, end; 
 printf("Enter a string: "); 
 gets(str); 
 i = end; 
 printf("Reversed words: "); 
 while(i >= 0) 
{ 
 while(i >= 0 && str[i] == ' ') 
 i--; 
 if(i < 0) 
 break; 
 end = i; 
 while(i >= 0 && str[i] != ' ') 
    i--;
 start = i + 1; 
 for(j = start; j <= end; j++) 
 printf("%c", str[j]); 
 printf(" "); 
 } 
 printf("\n"); 
 return 0;
  }


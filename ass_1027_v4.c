//compute factorial of a number 
#include<stdio.h> 
int main() 
{ 
int i,n,face=1; 
printf(“enter value of N:-”); 
scanf(“%d”,&n); 
for(i=n;i>=1;i--) 
{ 
printf(“%d\n”,i); 
fact=fact*i; 
} 
printf(“factorial=%d”,fact); 
}


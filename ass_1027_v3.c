//print the first N natural numbers in reverse
#include <stdio.h>
int main()
{
  int i,n;
printf("Enter the value of N: ");
scanf("%d", &n);
printf("The first %d natural numbers in reverse are:\n", n);
for(i = n; i >= 1; i--)
{
printf("%d ", i);
}
printf("\n");
return 0;
}

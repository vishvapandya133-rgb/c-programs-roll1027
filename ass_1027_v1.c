//find the largest element in a 1D array in bsc it fy c language
#include <stdio.h>
int main()
{
int n, i;
float arr[100], largest;

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

printf("Enter %d elements:\n", n);
for(i = 0; i < n; i++)
{
scanf("%f", &arr[i]);
}
largest = arr[0];
for(i = 1; i < n; i++)
{
if(arr[i] > largest)
{
largest = arr[i];
}
}
printf("The largest element in the array is: %.2f\n", largest);

return 0;
}

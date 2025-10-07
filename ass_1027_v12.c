//check whether a number is a prime palindrome #include <stdio.h> 
int isPrime(int num) 
{ 
 int i; 
if (num <= 1) 
return 0; 
for (i = 2; i * i <= num; i++) 
{ 
if (num % i == 0) 
return 0; // divisible, not prime 
} 
return 1; // prime 
} 
int isPalindrome(int num) 
{ 
int original = num, reversed = 0, remainder;  while (num != 0)
{ 
remainder = num % 10; 
reversed = reversed * 10 + remainder;  num /= 10; 
 } 
 return (original == reversed); 
} 
int main() 
{ 
int num; 
 printf("Enter a number: "); 
 scanf("%d", &num); 
if (isPrime(num) && isPalindrome(num))  printf("%d is a prime palindrome.\n", num);  else 
 printf("%d is NOT a prime palindrome.\n", num);  return 0; 
}


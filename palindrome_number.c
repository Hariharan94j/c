//Reverse a number and check if it is a palindrome

#include <stdio.h>
void main() 
{
    int n, temp, rev = 0, rem;
    
    printf("Enter number : ");
    scanf("%d", &n);
    temp=n;
    
    while (temp != 0) 
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    
    //printf("Reversed number = %d\n", rev);
    
    if(rev==n)
    {
      printf("%d is a palindrome number",n);
    }
    else
    {
      printf("%d is not a palindrome number",n);
    }
}

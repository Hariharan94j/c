//Largest among 3 numbers
//ternary operator is var = condition ? true : false

#include <stdio.h>
void main ()
{
  int num1,num2,num3,ans;
  
  printf("Enter 3 numbers\n");
  scanf("%d%d%d",&num1,&num2,&num3);
  
  ans = (num1>num2 && num1>num3) ? num1 : num2>num3 ? num2 : num3;
  
  printf("Largest number is %d", ans);
}

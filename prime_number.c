#include <stdio.h>

int main()
{
    int num,flag=0;
    scanf("%d",&num);
    div=num/2;
    
    for(int i=2;i<div;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number",num);
            flag=1;
            break;
        }
    }
    
       if(flag==0)
       {
           printf("%d is a prime number",num);
       }
    
}

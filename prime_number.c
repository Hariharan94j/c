#include <stdio.h>

int main()
{
    int num,divn,flag=0;
    scanf("%d",&num);
    divn=num/2;
    
    for(int i=2;i<divn;i++)
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

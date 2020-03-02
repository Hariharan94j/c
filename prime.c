#include <stdio.h>

int main()
{
    int num,temp=0;
    scanf("%d",&num);
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number",num);
            temp=1;
            break;
        }
    }
    if(temp==0)
    {
    printf("%d is a prime number",num);
    }

}

//Fibbonacci series

#include <stdio.h>
void main()
{
    int count,i,first,second,nxt;
    printf("Enter number of Fibbonacci numbers : ");
    scanf("%d",&count);
    
    first=0;
    second=1;
    for(i=0;i<count;i++)
    {
        if(i<=1)
        {
            nxt=i;
        }
        else
        {
            nxt=first+second;
            first=second;
            second=nxt;
        }
        printf("%d\n",nxt);
    }
}

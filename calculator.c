//Simple calculator using C

#include<stdio.h>
void main()
{
  int a,b,c;
  float d;
  char opt;
  
  printf("Enter num1 : ");
  scanf("%d",&a);
  printf("Enter num2 : ");
  scanf("%d",&b);
  
  printf("Enter operator : ");
  scanf("%c",&opt);
  getch();
  
  if(opt == '+') 
  {
    c=a+b;
    printf("%d %c %d = %d",a,opt,b,c);
  }
  else if(opt == '-') 
  {
    c=a-b;
    if(c<0) 
    {
        c*=-1;
        printf("%d %c %d = %d",b,opt,a,c);
    }
    else
    {
        printf("%d %c %d = %d",a,opt,b,c);
    }
  }
  else if(opt == '*')
  {
    c=a*b;
    printf("%d %c %d = %d",a,opt,b,c);
  }
  else if(opt == '/')
  {
    d=(float)a/b;
    printf("%d %c %d = %f",a,opt,b,d);
  }
  else
  {
    printf("Enter valid operator among + - * /");
  } 
}

#include<stdio.h>
int main()
{
  int n,f=1;
  printf("enter a number\n");
  scanf("%d",&n);
  while(n!=0)
{
f=n*f;
n=n-1;
}
printf("factorial=%d\n",f);
}

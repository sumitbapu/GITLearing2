#include<stdio.h>
int main()
{
  int n,fact=1;
  printf("enter a number\n");
  scanf("%d",&n);
  while(n!=0)
{
fact=n*fact;
n=n-1;
}
printf("factorial=%d\n",fact);
}

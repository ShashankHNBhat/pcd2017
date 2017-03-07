#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("\n enter the no. of integers u want to add:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of entered integers %d=",sum);
return 0;
}

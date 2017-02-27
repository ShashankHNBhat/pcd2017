#include<stdio.h>
int main()
{
int i,n;
int sum=0;
int a[100];
printf("\n enter the no of integers u want to add:");
scanf("%d",n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\n sum of the integers is =%d \n",sum);
return 0;
}

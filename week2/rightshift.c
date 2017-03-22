#include<stdio.h>
unsigned int rightshift(unsigned int x,unsigned int n)
{
for(int i=1;i<=n;i++)
{
if(x%2==0)
{
x=x>>1;

}
else
{
x=x>>1;
x=x+(1<<31);
}

}
return x;
}
int main()
{
unsigned int x,n,result;
printf("enter the value of x");
scanf("%u",&x);
printf("enter the how many times you want to rotate");
scanf("%u",&n);
result=rightshift(x,n);
printf("value of x after rotation is %u",result);
return 0;
}

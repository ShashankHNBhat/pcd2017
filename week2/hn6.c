#include<stdio.h>
#include<math.h>
float convertradian(float d)
{
float rad;
rad=(3.142/180)*d;
return rad;
}
float computesin(float x)
{
float term,sum,prev,diff;
int i;
term=x;
sum=x;
diff=x;
for(i=3;diff>0.00001;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
int main()
{
float deg,x,sum;
printf("enter the degree");
scanf("%f",&deg);
x=convertradian(deg);
sum=computesin(x);
printf("sin(%f)=%f",deg,sum);
}


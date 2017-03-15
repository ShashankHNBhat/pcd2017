#include<stdio.h>
#include<math.h>
int discriment(float a,float b,float c)
{
float d;
d=((b*b)-(4*a*c));
return d;
}
int roots(float a,float b,float c,float d)
{
float r1,r2,rpart,ipart;
if(d==0)
{
r1=r2=(-b/(2*a));
printf("roots are real and equal :\n r1=%f  and r2=%f ",r1,r2);
}
else if(d>0)
{
r1=(-b-(sqrt(d)))/(2*a);
r2=(-b-(sqrt(d)))/(2*a);
printf("roots are real and distinct : \n r1=%f and r2=%f",r1 ,r2);
}
else
{
rpart=(-b/(2*a));
ipart=(sqrt((-d))/(2*a));
printf("roots are imaginary \n r1=%f and r2=%f",rpart,ipart);
}
return 0;
}
int main()
{
float a,b,c,d,f,e,r1,r2;
printf("enter the coefficients of quadratic eqation(a,b & c) \n");
scanf("%f%f%f",&a,&b,&c);
e=discriment(a,b,c);
printf("discriment of quadratic equation is : %f \n",e);
f=roots(a,b,c,e);
return 0;
}

#include<stdio.h> 
#include<math.h>
float square(float n) 
{
 float a,b,d; 
a=n/2;
 b=n/a; 
d=fabs(a-b); 
while(d>0) 
{ 
a=(a+b)/2; 
b=n/a; 
d=fabs(a-b);
}
return a;
}
int main() 
{ float n; 
printf("enter the number\n"); 
scanf("%f",&n); float 
sr=square(n); 
printf("square root of the number is %f\n",sr); 
return 0;
}

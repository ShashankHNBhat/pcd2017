#include<stdio.h> 
#include<math.h>
float square(float n) 
{
 float sr=sqrt(n); 
return sr;
}
int main() 
{ 
float n; printf("enter the number\n"); 
scanf("%f",&n); 
float sr=square(n); 
printf("square root of the number is %f\n",sr); 
return 0;
}

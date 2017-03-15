#include<stdio.h> 
#include<math.h>
float poly(float x,int order,float a[15]) 
{
     float sum;
     int i;
     sum=a[order];
     for (i=order-1;i>=0;i--)
     {
        sum=(sum+a[i])*x;
     }
     return sum;
}
int main() 
{
    int i,order;
    float a[15],x,r,sum;
    printf("enter the order\n");
    scanf("%d",&order);
    printf("enter %d coeffecients of polynomial\n",order+1);
    for(i=0;i<=order;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("enter the value of x\n");
    scanf("%f",&x);
    sum=a[order];
    r=poly(x,order,a);
    printf("value of poynomial of x is %f\n",r);
    return 0;
}

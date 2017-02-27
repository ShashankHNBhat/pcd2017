#include<stdio.h>
struct complex
{
float real;
float imag;
};
struct complex add(struct complex a,struct complex b)
{
struct complex c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return c;
}
struct complex getcomplex()
{
struct complex c;
printf("enter real and imaginary no");
scanf("%f %f",&c.real ,&c.imag);
return c;
}
void printcomplex(struct complex d)
{
printf("%f+i%f \n", d.real,d.imag);
}
int main()
{
struct complex a,b,c;
a=getcomplex();
b=getcomplex();
c=add(a,b);
printcomplex(c);
return 0;
}


#include<stdio.h>
#include<math.h>
#define n 12
#define f(x) 4/(x+log10(7*x*x+2*x+7))
int main()
{
int i=2;
float a,b,h,r=0,s,sum;
printf("enter lower & upper bound : ");
scanf("%f%f",&a,&b);
h=(b-a)/n;
 while(i<n)
 {                        /*COMPOSITE TRAPEZOIDAL RULE*/
 r=r+f(a+i*h); 
 i++;
 }
s=f(a)+f(b);
sum=(s+2*r)*(h/2);
printf("\n\n integration value: %f\n\n",sum);
return 0;
}

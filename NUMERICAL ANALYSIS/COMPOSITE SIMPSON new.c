#include<stdio.h>
#include<math.h>
#define f(p) 4*p-3*p*p
int main()
{
int n,i=1,j=2;
float a,b,x,y,h,s1=0,s2=0,s3,sum;
printf("give n & a & b :\n");
scanf("%d%f%f",&n,&a,&b);
h=(b-a)/(2*n);
do
{
	x=a+i*h;
	y=a+j*h;
s1=s1+f(x);
s2=s2+f(y);
i=i+2;
j=j+2;
}
while(i<=2*n -1 && j<=2*n -2);
s3= f(a)+f(b);
sum=(s3 + 4*s1 + 2*s2)*(h/3);
printf("THE VALUE OF INTEGRATION IS : %f\n",fabs(sum));
return 0;
}


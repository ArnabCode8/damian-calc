#include<stdio.h>
#include<math.h>
#define f(x) 4*x - 3*pow(x,2)
int main()
{
int i,j,n;
float x[10000],a,b,y[10000],h,s1,s2,s3,term,sum;
printf("SIMPSON COMPOSITE RULE FOR INTEGRATION :\n\n");
printf("give the degree of accuracy n :\n");
scanf("%d",&n);
printf("give a & b :\n");
scanf("%f%f",&a,&b);
x[0]=a;
h=(b-a)/(2*n);
for(i=1;i<=2*n;i++)
{
x[i]=x[0]+i*h;
}
for(i=0;i<=2*n;i=i++)
{
y[i]=f(x[i]);
printf("y(%f)=%f\n",x[i],y[i]);
}
printf("\n\n");
s1=0;
for(i=1;i<=2*n-1;i=i+2)
{
term=y[i];
s1=s1 + term;
}
printf("s1=%f\n",s1);
s2=0;
for(i=2;i<=2*n-2;i=i+2)
{
term=y[i];
s2=s2+term;
}
printf("s2=%f\n",s2);
s3= y[0]+y[2*n];
printf("s3=%f",s3);
sum=(s3 + 4*s1 + 2*s2)*(h/3);
printf("THE VALUE OF INTEGRATION IS : %f\n",sum);
getch();
}


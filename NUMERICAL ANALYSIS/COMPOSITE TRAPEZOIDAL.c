#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n;
float a,b,x[1000],y[1000],h,sum,I;
printf("COMPOSITE TRAPEZOIDAL INTEGRATION : \n\n");
printf("give the degree of accuracy n : ");
scanf("%d",&n);
printf("\n\ngive a : ");
scanf("%f",&a);
printf("\n\ngive b : ");
scanf("%f",&b);
h=(b-a)/n;
printf("\n\ncommon interval space is h : %f",h);
for(i=0;i<n+1;i++)
{
x[i]= a + i*h;
}
for(i=0;i<n+1;i++)
{
y[i]=4*x[i] - 3*x[i]*x[i];
printf("y[%f] : %f\n\n",x[i],y[i]);
}
sum=0;
for(i=1;i<n;i++)
{
sum=sum + y[i];
}
I=(h*(y[0] + y[n] + 2*sum))/2;
printf("the intergration in [%f,%f] is : %f\n\n",a,b,I);
//horizon//
}


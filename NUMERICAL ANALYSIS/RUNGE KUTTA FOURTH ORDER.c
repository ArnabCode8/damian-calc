#include<stdio.h>
#include<math.h>
#define f(x,y)= x-y
int main()
{
int i,j,n;
float x[100],y[100],h,k[4],u[4],v[4],sum;
printf("4th order RUNGE-KUTTA METHOD of dy/dx = x-y:\n\n");
printf("give x[0] : ");
scanf("%f",&x[0]);
printf("\n\n");
printf("give y[0] : ");
scanf("%f",&y[0]);
printf("\n\n");
printf("give h : ");
scanf("%f",&h);
printf("\n\n");
printf("give n : ");
scanf("%d",&n);
printf("\n\n");
for(i=0;i<n+1;i++)
{
u[0]=x[i];
v[0]=y[i];
k[1]=h*f(u[0],v[0]);
u[1]=x[i]+(h/2);
v[1]=y[i]+(k[1]/2);
k[2]=h*f(u[1],v[1]);
u[2]=x[i]+(h/2);
v[2]=y[i]+(k[2]/2);
k[3]=h*f(u[2],v[2]);
u[3]=x[i]+h;
v[3]=y[i]+k[3];
k[4]=h*f(u[3],v[3]);
sum=(k[1]+2*k[2]+2*k[3]+k[4])/6;
x[i+1]=x[i]+h;
y[i+1]=y[i]+sum;
printf("x[%d] : %f\t\t",i,x[i]);
printf("y[%f] : %f\n\n",x[i],y[i]);
}
return 0;
}

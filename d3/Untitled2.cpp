#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n,fact[100],term;
float y[100],d[100][100],c[100],g[100],h,a,b,x,u,sum;           //d[i][j]= Ai[yj],c[i] is coefficient array//
printf("NEWTON FORWARD INTERPOLATION FORMULA: \n\n");
printf("number of intervals n : \n");
scanf("%d",&n);
printf("give 1st & last arguments : \n");
scanf("%f%f",&a,&b);
h=(b-a)/n;
for(i=0;i<=n;i++)
{
printf("enter y[%f] =  ",a+i*h);
scanf("%f",&y[i]);
printf("\n");
d[0][i]= y[i];
}
printf("\n\n");
printf("the DIFFERENCE table :\n\n");
for(i=1;i<=n;i++)
{
for(j=0;j<n;j++)
{
if(i+j==n+1)	
d[i][j]=0;
else
{
d[i][j]=d[i-1][j+1]-d[i-1][j];
}

}
printf("\n\n");
}
for(j=0;j<n;j++)
{
for(i=1;i<=n;i++)
{
printf(" %d[y%d]= %f\t",i,j,d[i][j]);//printf matrix//
}
printf("\n\n");
}
printf("fact[0]=1\n");
for(i=1;i<=n;i++)
{
fact[0]=1;	
fact[i]= fact[i-1]*i;
printf("fact[%d]=%d\n",i,fact[i]);
}
printf("\n\n");
for(i=0;i<n+1;i++)
{
c[i]=d[i][0]/fact[i];
printf("c[%d] : %f\n",i,c[i]);
}
printf("\n\ngive x : ");
scanf("%f",&x);
printf("\n\n");
u=(x-a)/h;
printf("u=(x-a)/h so u= %f\n",u);
printf("the expression of the newtons forward interpolation is :\n\n");
printf("f(x)= (%f)+",d[0][0]);
for(i=1;i<n+1;i++)
{		
for(j=0;j<i;j++)
{
printf("(u-%d)",j);
}
printf("(%f)+",c[i]);
}
printf("0\n\n");
//extra display//
for(i=1;i<n+1;i++)
{
g[i]=1;	
for(j=0;j<i;j++)
{

g[i] = g[i]*(u-j);
}
}
sum=0;
for(i=1;i<n+1;i++)
{
sum = sum + g[i]*c[i];	
printf("g[%d]=%f\n",i,g[i]);
}
printf("\n y[%f]= %f\n\n",x,sum+d[0][0]);
}

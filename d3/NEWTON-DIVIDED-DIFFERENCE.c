#include<stdio.h>
#include<math.h>
void main()
{
int i,j,r,n;
float x[100],y[100],f[100],g[100],h[100];  //f is the divided difference function,i,j are the indexes of 1st & last arguments//
printf("NEWTON DIVIDED DIFFERENCE INTERPOLATION :\n\n");
system("line.exe");
printf("give n : ");                       
scanf("%d",&n);
printf("\n\n");
printf("INPUT THE ARGUMENTS :\n\n");
for(i=0;i<n+1;i++)
{
printf("give x[%d] = ",i);
scanf("%f",&x[i]);
printf("\n");
}
printf("\n\n");
printf("INPUT THE FUNCTIONAL VALUES :\n\n");
for(i=0;i<n+1;i++)
{
printf("give y[%d] = ",i);
scanf("%f",&y[i]);
printf("\n");
}
printf("DIFFERENCE FUNCTIONAL VALUES :\n\n");
for(r=0;r<n+1;r++)
{
printf("f[");	
f[r]=0;
for(i=0;i<r+1;i++)
{
g[i]=1;
for(j=0;j<r+1;j++)                                      //g[r][i]=product(j:0->r\i){(x[i]-x[j])}//
{
if(j==i)	
{
g[i]=g[i]*1;
}
else
{
g[i]=g[i]*(x[i]-x[j]);
}
//external loop line//
}

h[i]=y[i]/g[i];
f[r]=f[r] + h[i];
printf("X%d,",i);
}
printf("]= %f\n\n",f[r]);
}
printf("the interpolation expression is :\n\n");
printf("f(x) : (%f) + \n\n",f[0]);
for(r=1;r<n+1;r++)
{
for(j=0;j<r;j++)
{
printf("(X - %f)",x[j]);
}
printf("(%f) + \n\n",f[r]);
}
printf("0\n\n");
//horizon//
}

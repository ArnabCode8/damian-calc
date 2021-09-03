#include<stdio.h>
#include<math.h>
void main()
{
int i,j,k,n;
float x[100],y[100],f[100][100];         //f is the divided difference function,i,j are the indexes of 1st & last arguments//
printf("give n : ");
scanf("%d",&n);
printf("\n\n");
for(i=0;i<n+1;i++)
{
printf("give x[%d] = ",i);
scanf("%f",&x[i]);
printf("\n");
}
printf("\n\n");
for(i=0;i<n+1;i++)
{
printf("give y[%d] = ",i);
scanf("%f",&y[i]);
printf("\n");
}
for(i=0;i<n+1;i++)
{
for(j=0;j<n+1;j++)
{
if(i<=j)
{
if(i==j)
f[i][j]=y[i];
else if(j==i+1)
f[i][j]=(y[j]-y[i])/(x[j]-x[i]);
else
f[i][j]=(f[i][j-1]-f[i+1][j])/(x[i]-x[j]);
}
else
f[i][j]=f[j][i];
}
}
//print loop//
for(i=0;i<n+1;i++)
{
printf("f[0][%d]= %f ",i,f[0][i]);	
printf("\n");
}
//horizon//
}

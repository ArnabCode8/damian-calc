#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n;
float x[100],y[100],l[100],g[100],h[100],f[100],d[100][100],a[100],z,sum;               //l[i] is the i th lagrangian funtion//
printf("\n\n\t\tLAGRANGE INTERPOLATION :\n\n");
system("line.exe");
printf("give n : ");
scanf("%d",&n);
printf("\n\n");
system("line.exe");
printf("GIVE THE ARGUMENT VALUES :\n\n");
for(i=0;i<n+1;i++)
{
printf("give x[%d] : ",i);
scanf("%f",&x[i]);
printf("\n\n");
}
system("line.exe");
printf("GIVE THE FUNCTIONAL VALUES :\n\n");
for(i=0;i<n+1;i++)
{
printf("give y[%f] : ",x[i]);
scanf("%f",&y[i]);
printf("\n\n");
}
system("line.exe");
printf("give x : ");
scanf("%f",&z);
printf("\n\n");
system("line.exe");
printf("THE LAGRANGIAN EXPRESSION IS : f(x) =\n\n");
system("line.exe");
sum=0;
for(i=0;i<n+1;i++)
{
g[i]=1;
f[i]=1;
for(j=0;j<n+1;j++)
{
if(j==i)
{
g[i]=g[i]*1;
f[i]=f[i]*1;
}
else 
{
d[i][j]=x[i]-x[j];
g[i]=g[i]*d[i][j];	
f[i]=f[i]*(z-x[j]);
printf("(x-%f)",x[j]);
}//else loop//
}//j loop//
h[i]=y[i]/g[i];
printf("(%f)+\n\n",h[i]);
a[i]=f[i]*h[i];
sum=sum+a[i];
}//i loop//
printf("0\n\n");
system("line.exe");
printf("THE FUNCTIONAL VALUE AT x = %f IS\n\n",z);
printf("y[%f] : %f\n\n",z,sum);
system("line.exe");
getch();
}

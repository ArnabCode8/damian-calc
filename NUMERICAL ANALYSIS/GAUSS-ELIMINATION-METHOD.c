#include<stdio.h>
#include<math.h>
int main()
{
int i,j,p,q,n,k;
float c[100][100],d[100],a[100][100][100],b[100][100],m[100][100],e[100][100],f[100][100],g[100],x[100],y[100];      
printf("GAUSS-ELIMINATION METHOD :");
printf("\n\n");                                //m[i][j]= -a[i][j][j]|a[j][j][j]//                                                       
printf("give n : ");
scanf("%d",&n);                               //x[k][j],k is the index of accuracy//
printf("\n\n");
for(i=1;i<n+1;i++)
{
for(j=1;j<n+1;j++)
{
printf("give a[%d][%d] : ",i,j);
scanf("%f",&c[i][j]);
printf("\n");
}
printf("\n give b[%d] : ",i);
scanf("%f",&d[i]);
printf("\n\n");
}
printf("the set of equations are :\n\n");
for(i=1;i<n+1;i++)
{
for(j=1;j<n+1;j++)
{
printf("(%f)x[%d] + ",c[i][j],j);	
}
printf("0 = (%f)\n\n",d[i]);
}
for(k=1;k<n+1;k++)         /*perfection index*/
{
for(i=1;i<n+1;i++)
{
for(j=1;j<n+1;j++)
{
b[1][i]=d[i];
a[1][i][j]=c[i][j];
}
}
}

for(k=1;k<n+1;k++)
{
for(i=1;i<n+1;i++)
{
	
if(i==k)
{
e[k][i]=1;
for(q=1;q<n+1;q++)
{
if(q==i)
e[k][i]=e[k][i]*a[k][i][q];
else
e[k][i]=e[k][i]*1;
}

	
for(p=i+1;p<n+1;p++)
{
for(j=1;j<n+1;j++)
{
m[p][i]=a[k][p][i]/e[k][i];
a[k+1][p][j]=a[k][p][j]-m[p][i]*a[k][i][j];
b[k+1][p]=b[k][p]-m[p][i]*b[k][i];
printf("a[%d][%d][%d] : %f\t",k+1,p,j,a[k+1][p][j]);
printf("\n\n");
}
printf("b[%d][%d] : %f\n\n",k+1,p,b[k+1][p]);
}
}
else
{
printf("");
}
}
printf("\n\n");
}

printf("the set of reduced equations are :\n\n");

for(k=1;k<n+1;k++)
{
for(i=1;i<n+1;i++)
{
for(j=1;j<n+1;j++)
{

if(k==i)
{
f[i][j]=a[k][i][j];
g[i]=b[k][i];
printf("(%f)x[%d] +",f[i][j],j);
}


}
}
printf("0 = %f\n\n",g[k]);
}
printf("\n\nthe solutions are :\n\n");

x[n]=g[n]/f[n][n];
for(i=n-1;0<i;i--)
{
y[i]=g[i];
for(j=n;0<j;j--)
{
if(j>i)
y[i]=y[i]-f[i][j]*x[j];
else
y[i]=y[i]+0;
}
x[i]=y[i]/f[i][i];
}
for(i=1;i<n+1;i++)
{
printf("x[%d] : %f\n\n",i,x[i]);
}
return 0;
}

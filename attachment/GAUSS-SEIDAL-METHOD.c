#include<stdio.h>
#include<math.h>
void main()
{
int i,j,p,m,n,k;
float a[100][100],b[100],x[100][100],y[100][100],d[100];          //x[k][j],k is the index of accuracy//
printf("GAUSS-SEIDAL METHOD :\n\n");
printf("give the no. of equations(m) : ");
scanf("%d",&m);
printf("\n\n");
printf("give the no. of variables(n) : ");
scanf("%d",&n);
printf("\n\n");
printf("give the no. of iterations(k) : ");
scanf("%d",&k);
printf("\n\n");
for(i=1;i<m+1;i++)
{
for(j=1;j<n+1;j++)
{
printf("give a[%d][%d] : ",i,j);
scanf("%f",&a[i][j]);
printf("\n");
}
printf("\n give b[%d] : ",i);
scanf("%f",&b[i]);
printf("\n\n");
}
printf("the set of equations are :\n\n");
for(i=1;i<m+1;i++)
{
for(j=1;j<n+1;j++)
{
printf("(%f)x[%d] + ",a[i][j],j);	
}
printf("0 = (%f)\n\n",b[i]);
}
printf("the denomenator coefficients are :\n");
for(i=1;i<m+1;i++)
{
	d[i]=1;
for(j=1;j<n+1;j++)
{
if(j==i)
{
d[i]=d[i]*a[i][j];
}
else
{
d[i]=d[i]*1;
}
}
printf("a[%d][%d] : %f\n",i,i,d[i]);
}
printf("\n");
for(j=1;j<n+1;j++)
{
x[0][j] = 0;
}
for(p=0;p<k+1;p++)
{
for(i=1;i<m+1;i++)
{
y[p+1][i] = b[i];	
for(j=1;j<n+1;j++)
{
if(j==i)
{
y[p+1][i]=y[p+1][i]+0;
}
else                              //x[p+1][i] = y[p+1][i]/a[i][j];//
{
if(j<i)
y[p+1][i]=y[p+1][i]-a[i][j]*x[p+1][j];  
else
y[p+1][i]=y[p+1][i]-a[i][j]*x[p][j];
}
}
x[p+1][i] = y[p+1][i]/d[i];
printf("x[%d][%d] = %f\n",p+1,i,x[p+1][i]);
}
printf("\n\n");
}                                              //arnab programming//



//horizon//

}

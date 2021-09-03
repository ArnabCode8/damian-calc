#include<stdio.h>
#include<math.h>
int main()
{
int i,j,n,fact[100],term;
float y[100],d[100][100],c[100],g[100],h,a,b,x,u,sum;          
 //d[i][j]= Ai[yj],c[i] is coefficient array//
printf("\n\n\t\t\tNEWTON BACKWARD INTERPOLATION FORMULA: \n\n");
printf("number of intervals n : ");
scanf("%d",&n);
printf("give 0th argument : ");
scanf("%f",&a);
printf("give %dth argument : ",n);
scanf("%f",&b);
h=(b-a)/n;
for(i=0;i<=n;i++)
{
printf("enter y[%f] =  ",a+i*h);
scanf("%f",&y[i]);
printf("\n");
d[0][i]= y[i];
}
printf("\n\n");
printf("THE DIFFERENCE TABLE :\n");
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
}
printf("\n\n");

for(j=0;j<n;j++)
{
for(i=1;i<=n;i++)
{
printf(" %d[y%d]= %f\t",i,j,d[i][j]);//printf matrix//
}
printf("\n\n");
}
printf("\nfact[0]=1\n");
for(i=1;i<=n;i++)
{
fact[0]=1;	
fact[i]= fact[i-1]*i;
printf("fact[%d]=%d\n",i,fact[i]);
}
printf("\n\n");
for(i=0;i<n+1;i++)
{
c[i]=d[i][n-i]/fact[i];                        //d[i][j]= Ai[yj],c[i] is coefficient array//
printf("V(%d)[%d]/L%d : %f\n",i,i,i,c[i]);
}
printf("\n\ngive x : ");
scanf("%f",&x);
printf("\n\n");
u=(x-b)/h;
printf("\nu=(x-b)/h so u= %f\n\n",u);
printf("\nBACK-WARD INTERPOLATION FORMULA IS :\n\n");
printf("f(x) = %f +\n\n",c[0]);
for(i=1;i<n+1;i++)
{		
for(j=0;j<i;j++)
{
printf("(u+%d)",j);
}
printf("(%f) +\n\n",c[i]);
}
printf("0\n\n");
for(i=1;i<n+1;i++)
{
g[i]=1;	
for(j=0;j<i;j++)
{
printf("(%f + %d)",u,j);
g[i] = g[i]*(u+j);
}
printf(" = (%f)\n\n",g[i]);
}

sum=0;
for(i=0;i<n+1;i++)
{
sum = sum + g[i]*c[i];	
}
printf("\nthe functional value of y at x = (%f) is\n",x);
printf("\n y[%f]= %f\n\n",x,sum+c[0]);
return 0;
}

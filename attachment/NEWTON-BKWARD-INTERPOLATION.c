#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n,fact[100],term;
float y[100],d[100][100],c[100],g[100],h,a,b,x,u,sum;           //d[i][j]= Ai[yj],c[i] is coefficient array//
printf("\n\n\t\t\tNEWTON BACKWARD INTERPOLATION FORMULA: \n\n");
system("line.exe");
printf("number of intervals n : ");
scanf("%d",&n);
printf("\n\n");
system("line.exe");
printf("give 0th argument : ");
scanf("%f",&a);
printf("\n\n");
system("line.exe");
printf("give %dth argument : ",n);
scanf("%f",&b);
printf("\n\n");
system("line.exe");
h=(b-a)/n;
for(i=0;i<=n;i++)
{
printf("enter y[%f] =  ",a+i*h);
scanf("%f",&y[i]);
printf("\n");
d[0][i]= y[i];
}
system("line.exe");
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
system("line.exe");
printf("\n\n");

for(j=0;j<n;j++)
{
for(i=1;i<=n;i++)
{
printf(" %d[y%d]= %f\t",i,j,d[i][j]);//printf matrix//
}
printf("\n\n");
}
system("line.exe");
printf("\nfact[0]=1\n");
for(i=1;i<=n;i++)
{
fact[0]=1;	
fact[i]= fact[i-1]*i;
printf("fact[%d]=%d\n",i,fact[i]);
}
system("line.exe");
printf("\n\n");
for(i=0;i<n+1;i++)
{
c[i]=d[i][n-i]/fact[i];                        //d[i][j]= Ai[yj],c[i] is coefficient array//
printf("V(%d)[%d]/L%d : %f\n",i,i,i,c[i]);
}
system("line.exe");
printf("\n\ngive x : ");
scanf("%f",&x);
printf("\n\n");
system("line.exe");
u=(x-b)/h;
printf("\nu=(x-b)/h so u= %f\n\n",u);
system("line.exe");
printf("\nBACK-WARD INTERPOLATION FORMULA IS :\n\n");
system("line.exe");
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
system("line.exe");
//extra display//
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
system("line.exe");
printf("\nthe functional value of y at x = (%f) is\n",x);
printf("\n y[%f]= %f\n\n",x,sum+c[0]);
system("line.exe");
getch();
//horizon//
}

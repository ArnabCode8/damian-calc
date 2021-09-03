#include<stdio.h>
#include<math.h>
void main()
{
int i,j,k,n,fact[100];
float y[100],d[100][100],c[100],p[100],q[100],h,a,b,x,u,sum;           //d[i][j]= Ai[yj],c[i] is coefficient array//
printf("\n\n\t\t\tNEWTON FORWARD DIFFERENTIATION FORMULA:\n\n");
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
}
system("line.exe");
for(j=0;j<n;j++)
{
for(i=1;i<=n;i++)
{
printf(" %d[y%d]= %f\t",i,j,d[i][j]);//printf matrix//
}
printf("\n\n");
}
system("line.exe");
printf("fact[0]=1\n");
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
c[i]=d[i][0]/fact[i];
printf("(%d)y[0]/L(%d) : %f\n",i,i,c[i]);
}
system("line.exe");
printf("\n\ngive x : ");
scanf("%f",&x);
printf("\n\n");
system("line.exe");
u=(x-a)/h;
printf("u=(x-a)/h so u= %f\n",u);
system("line.exe");
printf("THE DIFFN OF FORWARD INTERPOLATION IS :\n\n");
system("line.exe");
printf("f'(x)= \n\n");
for(i=1;i<n+1;i++)
{
printf("{");
p[i]=0;		
for(j=0;j<i;j++)
{
q[j]=1;	
for(k=0;k<i;k++)
{
if(k==j)
{
q[j]=q[j]*1;
printf("");
}
else
{
q[j]=q[j]*(u-k);
printf("(u - %d)",k);
}
}
p[i]=p[i]+q[j];
printf(" + ");                                           //printf("(u-%d)",j);
}
printf("0}(%f) +\n\n",c[i]/h);
}
printf("0\n\n");
system("line.exe");
//extra display//

sum=0;
for(i=1;i<n+1;i++)
{
sum = sum + p[i]*c[i];	
                                       //printf("g[%d]=%f\n",i,g[i]);//
}
printf("THE FUNCTIONAL VALUE OF dy/dx AT x = (%f)\n\n ",x);
system("line.exe");
printf("\n dy/dx at [%f] = %f\n\n",x,sum/h);
system("line.exe");
getch();
//horizon//
}

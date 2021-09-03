#include<stdio.h>
#include<math.h>
void main()
{
int i,j,p,q,n,k;
float c[100][100],d[100],a[100][100][100],b[100][100],m[100][100],e[100][100];      //x[k][j],k is the index of accuracy//
printf("\n\n");                                //m[i][j]= -a[i][j][j]|a[j][j][j]//                                                       
printf("give the no. of variables(n) : ");
scanf("%d",&n);
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
for(k=1;k<n+1;k++)
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
printf("b[%d][%d] : %f",k+1,p,b[k+1][p]);
printf("\n\n");
}
}
}
else
{
printf("");
}
}
printf("\n\n");
}


//horizon//
}

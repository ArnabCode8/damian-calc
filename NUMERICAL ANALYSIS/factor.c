#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n,m[100],r;
printf("give n : ");
scanf("%d",&n);
printf("\n\n");
for(j=1;j<10;j++)
{
	m[j]=n;
for(i=2;i<m[j]+1;i++)
{
r=m[j]%i;
if(r==0)
{
printf("%d ",i);	
m[j+1]=m[j]/i;
}
else
m[j+1]=m[j];
}
}

//horizon//
}

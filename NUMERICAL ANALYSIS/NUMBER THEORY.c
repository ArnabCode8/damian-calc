#include<stdio.h>
#include<math.h>
void main()
{
int i,j,x,y,p,a,b,c;
printf("enter the integer x : ");
scanf("%d",&x);
printf("\n\n");
p=x;
for(i=1;i<x;i++)
{
	y=x%i;
if(y==0)
{
p=x/i;
printf("%d ",i);


p=x;
printf("(");
for(j=1;j<p;j++)
{
a=p%j;
if(a==0)
{
b=p/j;
printf("%d",j);
}
else
b=p;
}

}
else
printf(")");
printf("\n");

}




//horizon//
}

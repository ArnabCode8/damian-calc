#include<stdio.h>
void main()
{
int i,j,l,m,n,k;
for(i=1;i<=3600*24;i++)
{
j=i%3600;//sec,min//
k=j%60;//sec//
m=(i-j)/3600;//hour//
n=(j-k)/60;//min//
printf("\n|%d SEC|%d MIN|%d HOUR|\n\n",k,n,m);
sleep(1000);
}
getch();
}

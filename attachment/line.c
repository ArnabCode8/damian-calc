#include<stdio.h>
void main()
{
int i;
char c[110];
for(i=1;i<=110;i++)
{
c[i]='_';
printf("%c",c[i]);
sleep(5);
}
printf("\n\n");
}

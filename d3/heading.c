#include<stdio.h>
void main()
{
int i;
char c[30];
printf("\n\n");
for(i=1;i<=30;i++)
{
c[i]='�';
printf("%c",c[i]);
sleep(5);
}
printf("\n\n");
}

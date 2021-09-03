#include<stdio.h>
void main()
{
int i;
char f[15]=":SHUTTING DOWN:",ch[72];	
for(i=0;i<=15;i++)
{
printf("%c",f[i]);
sleep(100);
}
printf("\n\n");
for(i=1;i<72;i++)
{
ch[i]='ß';
printf("%c",ch[i]);
sleep(50);
}
printf("\npress any key...\n");
}

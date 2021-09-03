#include<stdio.h>
void main()
{
int x1,x2;
char c[5];
printf("\nBACK???(yes/no)\n");
scanf("%s",c);
system("line.exe");
x1=strcmp(c,"yes");
x2=strcmp(c,"no");
if(x1==0)
{
system("nested.exe");
}
else if(x2==0)
{
printf("\n\n");	
system("shut.exe");	
}
else
{
printf("\nINVALID ANS\n");
system("line.exe");
printf("\n");
system("shut.exe");
}
}

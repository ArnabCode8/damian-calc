#include<stdio.h>
void main()
{
int n;
printf("NUMERICAL-DIFFENENTIATION:\n");
system("line.exe");
printf("1 forward differentiation\n");
printf("2 backward differentiation\n");
system("line.exe");
printf("which one???\n");
scanf("%d",&n);
if(n==1)
{
system("line.exe");
system("FRWD-DIFFERENTIATION.exe");
}
else if(n==2)
{
system("line.exe");
system("BKWD-DIFFERENTIATION.exe");
}
else
printf("not assigned yet\n");
}

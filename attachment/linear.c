#include<stdio.h>
void main()
{
int n;
printf("SYSTEM OF LINEAR EQUATIONS CONTENT :\n");
system("line.exe");
printf("1 gauss elimination method\n");
printf("2 gauss jacobian method\n");
printf("3 gauss seidal method\n");
system("line.exe");
printf("which one???\n");
scanf("%d",&n);
if(n==1)
{
system("line.exe");
system("GAUSS-ELIMINATION-METHOD.exe");
}
else if(n==2)
{
system("line.exe");
system("GAUSS-JACOBI-METHOD.exe");
}
else if(n==3)
{
system("line.exe");
system("GAUSS-SEIDAL-METHOD.exe");
}
else
printf("not assaigned yet\n");
}

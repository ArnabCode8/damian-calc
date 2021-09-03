#include<stdio.h>
void main()
{
int n;
printf("INTERPOLATION CONTENT:\n");
system("line.exe");
printf("1 newton forward interpolation\n");
printf("2 newton backward interpolation\n");
printf("3 divided difference\n");
printf("4 *lagrange interpolation\n");
system("line.exe");
printf("which one???\n");
scanf("%d",&n);
if(n==1)
{
system("line.exe");	
system("NEWTON-FRWD-INTERPOLATION.exe");
}
else if(n==2)
{
system("line.exe");	
system("NEWTON-BKWARD-INTERPOLATION.exe");
}
else if(n==3)
{
system("line.exe");	
system("NEWTON-DIVIDED-DIFFERENCE.exe");
}
else if(n==4)
{
system("line.exe");	
system("LAGRANGE-INTERPOLATION.exe");
}
else
printf("not assigner yet\n");
}

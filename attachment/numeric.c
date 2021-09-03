#include<stdio.h>
void main()
{
int n;
printf("NUMERICAL-ANALYSIS:\n");
system("heading.exe");
printf("1 for interpolations\n");
printf("2 for system of linear equations\n");
printf("3 for differentiation\n");
printf("4 for statistics\n");
system("line.exe");
printf("which one???\n");
scanf("%d",&n);
if(n==1)
{
system("line.exe");	
system("interpolation.exe");
}
else if(n==2)
{
system("line.exe");	
system("linear.exe");
}
else if(n==3)
{
system("line.exe");	
system("differentiation.exe");
}
else if(n==4)
{
system("line.exe");
system("STATISTICS.exe");
}
else
printf("not assigner yet\n");
}

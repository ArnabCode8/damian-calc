#include<stdio.h>
void main()
{
int x,y,z;
char p[10];
printf("\n:GIVE PERMISSION:(start|dont)\n");
system("heading.exe");
scanf("%s",p);
system("line.exe");
x=strcmp(p,"start");
y=strcmp(p,"dont");
z=strcmp(p,"override");
if(x==0)
{
system("SHELL.exe");
}
else if(y==0)
{
printf("\nTHANKS A LOT\n");
}
else if(z==0)
{
printf("\nOVERRIDE PRIORITY ACTIVATED>>>\n");	
system("nested.exe");
}
else
{
printf("\ndont you understad english!!!\n");
}
getch();
}

#include<stdio.h>
#include<math.h>
void main()
{
int x,i,y1,y2;
char ch[50],f[15]=":SHUTTING DOWN:",m[5];
printf("TRY AGAIN???(yes/no)\n\n");
scanf("%s",m);
system("line.exe");
y1=strcmp(m,"yes");
y2=strcmp(m,"no");
if(y1==0)
{
printf("\nENTER THE PASSWORD :\n");       //:ARNAB PROGRAMMING://
scanf("%s",ch);
x=strcmp(ch,"arnab888");
printf("\nVERIFYING    \n\n");
for(i=1;i<150;i++)
{
ch[i]='ß';
printf("%c",ch[i]);
sleep(10);
}	
if(x==0)
{	
printf("\nACCESS GRANTED :\n\n");
system("\nline.exe");
system("nested.exe");
system("line.exe");
}
	else
{
printf("\nACCESS DENIED\n");
system("\nline.exe");
system("subshell.exe");
}
}
else if(y2==0)
{
system("shut.exe");
}
else
{
printf("\n:INVALID ANS:\n\n");
system("shut.exe");
}
}

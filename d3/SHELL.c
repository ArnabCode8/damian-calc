#include<stdio.h>
#include<math.h>
void main()
{
int x,i;
char ch[50],e[19]=":ARNAB PROGRAMMING:",f[15]=":SHUTTING DOWN:";
system("line.exe");
system("theory.exe");
system("line.exe");
system("line.exe");
printf("\n");
for(i=0;i<=19;i++)
{
printf("%c",e[i]);
sleep(100);
}
printf("\n");
system("\nline.exe");
printf("\n\nINITIATING PROGRAMMEE    \n\n");
for(i=1;i<110;i++)
{
	
ch[i]='ß';
printf("%c",ch[i]);
sleep(50);

}
printf("\n\nENTER THE PASSWORD :\n");       //:ARNAB PROGRAMMING://
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
getch();
}

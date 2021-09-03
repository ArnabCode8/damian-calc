#include<stdio.h>
void main()
{
int i,j,r,s;
char a[60][60];
for(j=1;j<=60;j++)
{
for(i=1;i<=60;i++)
{
r=j%2;
s=i%2;
if(r==0&&s!=0)
{
a[i][j]='ß';
printf("%c",a[i][j]);
}
else if(r!=0&&s==0)
{
a[i][j]='ß';
printf("%c",a[i][j]);
}
else 
{
a[i][j]=' ';
printf("%c",a[i][j]);
}
}
printf("\n");
}

getch();
}

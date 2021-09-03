#include<stdio.h>
void main()
{
int n,i,j1,l1,x,y,v,b[40];
char c[100];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("line.exe");
for(j1=1;j1<=l1;j1++)
{
printf("\nLOOP :%d\n",j1);	
printf("\nhow many readings will be spotted:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\ngive b%d out of 100: \n",i);
scanf("%d",&b[i]);
}
printf("\n\n");
for(i=1;i<=n;i++)
{
v=(b[i]*100)/100;
for(x=0;x<=100;x++)
{	
if(x<=v)
{
c[x]='²';
printf("%c",c[x]);
sleep(5);
}
else
{
c[x]='°';
printf("%c",c[x]);
sleep(5);
}
}
printf("--%d percent(%d)",b[i],i);
printf("\n\n");
}
system("line.exe");//for i//
}

}

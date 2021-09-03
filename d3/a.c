#include<stdio.h>
void main()
{
int j1,l1,y1,y2,y3,y4,y5,y6;
char fx[10];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\ngive the function :\n");	
scanf("%s",fx);
y1=strcmp(fx,"sinx");
y2=strcmp(fx,"cosx");
y3=strcmp(fx,"tanx");
y4=strcmp(fx,"cotx");
y5=strcmp(fx,"secx");
y6=strcmp(fx,"cosecx");
if(y1==0)
printf("\nD(sinx)=cosx\n");
else if(y2==0)
printf("\nD(cosx)=-sinx\n");
else if(y3==0)
printf("\nD(tanx)=secx*secx\n");
else if(y4==0)
printf("\nD(cotx)=-cosecx*cosecx");
else if(y5==0)
printf("\nD(secx)=secx*tanx\n");
else if(y6==0)
printf("\nD(cosecx)=-cosecx*cotx\n");
else
printf("\n\n");
}

getch();
}

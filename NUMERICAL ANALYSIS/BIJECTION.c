#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
float o,a[1000],b[1000],x[1000],y[1000],d[1000],l[1000];             //a{+},b{-} variables//
printf("\n\n\t\t\t METHOD OF BISECTION :\n\n");
system("line.exe");
printf("\n [give the no. of iteration (<1000)] n : ");
scanf("%d",&n);
printf("\n\n");                                                                                                    
system("line.exe");
printf("give the standard zero : ");
scanf("%f",&o);
printf("\n\n");
system("line.exe");
printf("give positive argument (a[0]) : ");
scanf("%f",&a[0]);
printf("\n\n");
system("line.exe");
printf("give negative argument (b[0]) : ");
scanf("%f",&b[0]);
printf("\n\n");
system("line.exe");
for(i=0;i<n+1;i++)
{
printf("\n");	
printf("n = %d\t",i);
printf("a[%d] = %f\t",i,a[i]);	
printf("b[%d] = %f\t",i,b[i]);
x[i+1]=(a[i] + b[i])/2;
printf("x[%d] = %f\t",i+1,x[i+1]);
y[i+1] = x[i+1]*x[i+1]*x[i+1] - 3*x[i+1] + 1.06;
printf("y[%d] = %f",i+1,y[i+1]);

if(y[i+1]==0)
{
printf("\n %f is the exact root\n",x[i+1]);
a[i+1]=x[i+1];
b[i+1]=x[i+1];
d[i+1] = a[i+1] - b[i+1];
l[i+1] = sqrt(d[i+1]*d[i+1]);
}

else
{
if(y[i+1]>0)                       //arnab programming//
{
printf("(>0)\t");	
a[i+1]=x[i+1];
b[i+1]=b[i];
d[i+1] = a[i+1] - b[i+1];
l[i+1] = sqrt(d[i+1]*d[i+1]);

if(l[i+1]<0)
printf("(->0)");
else
printf("");
}
else
{
printf("(<0)\t");	
a[i+1]=a[i];
b[i+1]=x[i+1];
d[i+1] = a[i+1] - b[i+1];
l[i+1] = sqrt(d[i+1]*d[i+1]);

if(l[i+1]<o)
printf("(->0)");
else
printf("");
}
}

printf("d[%d] : %f",i+1,l[i+1]);
printf("\n\n");
}
system("line.exe");
//horizon//
getch();
}


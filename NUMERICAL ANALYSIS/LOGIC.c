#include<stdio.h>
#include<math.h>
void main()
{
int i,p,q,r,x[10],y[10],z[10],cx[10],cy[10],cz[10],a[10],b[10],c[10],s[i],k[i];
printf("how x : ");
scanf("%d",&p);
printf("\n\n");
system("line.exe");
printf("how y : ");
scanf("%d",&q);
printf("\n\n");
system("line.exe");
printf("how z : ");
scanf("%d",&r);
printf("\n\n");
system("line.exe");

printf("x y z x' y' z' %dx+%dy+%dz  %dx^%dy^%dz ",p,q,r,p,q,r);
for(i=1;i<9;i++)
{
printf("give x[%d] : ",i);	
scanf("%d",&x[i]);
printf("give y[%d] : ",i);	
scanf("%d",&y[i]);
printf("give z[%d] : ",i);	
scanf("%d",&z[i]);

if(x[i]==1)
cx[i]=0;
else
cx[i]=1;
if(y[i]==1)
cy[i]=0;
else
cy[i]=1;
if(z[i]==1)
cz[i]=0;
else
cz[i]=1;
if(p==0)
a[i]=cx[i];
else
a[i]=x[i];
if(q==0)
b[i]=cy[i];
else
b[i]=y[i];
if(r==0)
c[i]=cz[i];
else
c[i]=z[i];
s[i]=a[i]+b[i]+c[i];
k[i]=a[i]*b[i]*c[i];

if(s[i]==0)
printf("%d %d %d %d %d %d (+) : %d ,\t(.) : %d\n",x[i],y[i],z[i],cx[i],cy[i],cz[i],s[i],k[i]);
else
printf("%d %d %d %d %d %d (+) : 1 ,\t(.) : %d\n",x[i],y[i],z[i],cx[i],cy[i],cz[i],k[i]);
}

//horizon//
}

#include<stdio.h>
#include<math.h>
void main()
{
int i,n;
float a[100],max[100],m;
printf("\n\n\t\tn : ");
scanf("%d",&n);
printf("\n\n");
for(i=1;i<n+1;i++)
{
printf("a[%d] : ",i);
scanf("%f",&a[i]);
printf("\n\n");
}
max[1]=a[1]; 
for(i=1;i<n;i++)
{
if(a[i+1]<max[i])
{
printf("(%f) > (%f)\t",max[i],a[i+1]);
max[i+1]=max[i];
printf("max(%d) : (%f)\n\n",i+1,max[i+1]);
}
else if(a[i+1]==max[i])
{
printf("(%f) = (%f)\t",a[i],a[i+1]);
max[i+1]=max[i];
printf("max(%d) : (%f)\n\n",i+1,max[i+1]);
}
else
{
printf("(%f) < (%f)\t",max[i],a[i+1]);
max[i+1]=a[i+1];
printf("max(%d) : (%f)\n\n",i+1,max[i+1]);
}
}
m=max[n];
printf("\n\n");
printf("max : %f",m);
//horizon//
}

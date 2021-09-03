#include<stdio.h>
#include<math.h>
void main()
{
int i,j,p;
float a[1000],b[1000],x[1000],h[1000],y[1000],z[1000],w[1000],m[1000],n[1000],d[1000];
printf("\nRegula-Falsi Iteration method : \n\n");
printf("give  degree of accuracy n : ");
scanf("%d",&p);
printf("\n\n");
printf("give a[0](+) : ");                         //m[i] = |y[i]| = sqrt(y[i]*y[i])//
scanf("%f",&a[0]);
printf("\n\n");                                   //y[i]=f[a[i]],z[i]=f[b[i]]//
printf("give b[0](-) : ");                        //m[i] = |y[i]| = sqrt(y[i]*y[i])// 
scanf("%f",&b[0]);
printf("\n\n");
for(i=0;i<p+1;i++)
{
	printf("{\n\n");
	printf("a[%d] : %f\n\n",i,a[i]);
	printf("b[%d] : %f\n\n",i,b[i]);
y[i]= a[i]*a[i]*a[i] + 2*a[i] - 2;	
z[i]= b[i]*b[i]*b[i] + 2*b[i] - 2;
printf("f[a(%d)=%f] : %f\n\n",i,a[i],y[i]);
printf("f[b(%d)=%f] : %f\n\n",i,b[i],z[i]);
d[i]=(b[i]-a[i]);	
printf("{b(%d) - a(%d)} : %f\n\n",i,i,d[i]);
m[i]=sqrt(y[i]*y[i]);
n[i]=sqrt(z[i]*z[i]);
h[i]=(m[i]*d[i])/(m[i]+n[i]);
x[i+1]= a[i] + h[i];
printf("x[%d] : %f\n\n",i+1,x[i+1]);
w[i+1]= x[i+1]*x[i+1]*x[i+1] + 2*x[i+1] - 2;
printf("f[x(%d)=%f] : %f\t",i+1,x[i+1],w[i+1]);
if(w[i+1]>0)
{
a[i+1]=x[i+1];
b[i+1]=b[i];
printf("(>0)\n\n");
}
else if(w[i+1]<0)
{
a[i+1]=a[i];	
b[i+1]=x[i+1];
printf("(<0)\n\n");
}
else
printf("exact root\n\n");
printf("}\n\n");
}



//horizon//
}


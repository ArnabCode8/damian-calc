#include<stdio.h>
#include<math.h>
void main()
{
int i,j,n;
float a[4],y[4],x[100],skew,kurt,var;
printf("\n\n\t\t\t STATISTICAL PROGRAMMING	\n\n");
system("line.exe");
printf("give the number of popullation (n) : ");
scanf("%d",&n);
printf("\n\n");
system("line.exe");
for(i=1;i<n+1;i++)
{
printf("give x(%d) : ",i);
scanf("%f",&x[i]);
printf("\n\n");
}
system("line.exe");
a[1]=0;
a[2]=0;
a[3]=0;
a[4]=0;
for(i=1;i<n+1;i++)
{
a[1]=a[1]+(x[i]/n);
a[2]=a[2]+(x[i]*x[i]/n);
a[3]=a[3]+(x[i]*x[i]*x[i]/n);
a[4]=a[4]+(x[i]*x[i]*x[i]*x[i]/n);
}
printf("1st moment : %f\n\n",a[1]);
printf("2nd moment : %f\n\n",a[2]);
printf("3rd moment : %f\n\n",a[3]);
printf("4th moment : %f\n\n",a[4]);
system("line.exe");
y[1]=a[1];
y[2]=a[2]-a[1]*a[1];
y[3]=a[3]-3*a[2]*a[1]+2*a[1]*a[1]*a[1];
y[4]=a[4]-4*a[3]*a[1]+6*a[2]*a[1]*a[1]-3*a[1]*a[1]*a[1];
printf("1st central-moment : %f\n\n",y[1]);
printf("2nd central-moment : %f\n\n",y[2]);
printf("3rd central-moment : %f\n\n",y[3]);
printf("4th central-moment : %f\n\n",y[4]);
system("line.exe");
var=sqrt(y[2]);
skew=y[3]/(var*var*var);
kurt=y[4]/(var*var*var*var);
printf("mean : %f\n\n",a[1]);
printf("variance : %f\n\n",var);
printf("coefficient of skewness : %f\n\n",skew);
printf("coefficient of kurtosis : %f\n\n",kurt);
system("line.exe");

}

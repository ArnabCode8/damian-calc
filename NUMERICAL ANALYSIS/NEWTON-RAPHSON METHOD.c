#include<stdio.h>
#include<math.h>
#define error 0.00001
#define f(p) pow(p,3) -8*p -4
#define g(p) 3*p*p -8 
int main()
{
int n=1;
float x,y,z,h,a;
printf("\n\n\t\t\tNEWTON-RAPHSON METHOD of x2+2x-2=0 :\n\n");
printf("___________________________________________________\n");
printf("give a crude approximation of the root : ");
scanf("%f",&a);
printf("\n\n");
printf("_____________________________________________________________________\n"); 
printf("n        x             f(x)           f'(x)          error\n");
printf("_____________________________________________________________________\n");
x=a;
do
{
y=f(x);
z=g(x);
h=y/z;
printf("%d  %f    %f    %f    %f\n",n,x,y,z,fabs(h));
x=x-h;
n++;   
printf("___________________________________________________________________\n");
}
while(fabs(h)> error);
printf("\n\nTHE ROOT IS : %f\n\n",x);
return 0;
}

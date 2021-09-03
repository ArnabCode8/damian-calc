#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("\t\t\tENTER THREE VALUES:\n");
scanf("%d%d%d",&a,&b,&c);
printf("the relation is :\n\n");
if(a>b)
{
if(b>c)
printf("%d>%d>%d",a,b,c);
else if(b==c)
printf("%d>%d=%d",a,b,c);
else //b<c//
{
if(a>c)
printf("%d>%d>%d",a,c,b);
else if(a==c)
printf("%d=%d>%d",a,c,b);
else//a<c//
printf("%d>%d>%d",c,a,b);
//outer loop 2//
}
//outer loop 1//
}

else if(a==b)
{
if(a>c)
printf("%d<%d=%d",c,a,b);
else if(a==c)
printf("%d=%d=%d",a,b,c);
else//a<c//
printf("%d=%d<%d",a,b,c);

//outer loop 1//
}

else //a<b//
{
if(b>c)
{
if(a>c)
printf("%d>%d>%d",b,a,c);
else if(a==c)
printf("%d=%d<%d",a,c,b);
else//a<c//
printf("%d>%d>%d",b,c,a);

}
else if(b==c)
printf("%d<%d=%d",a,b,c);
else//b<c//
printf("%d>%d>%d",c,b,a);
//outer loop 1//
}
printf("\n\n");

//horizon//
}

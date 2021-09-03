#include<stdio.h>
#include<math.h>
void main()
{
int i;
char ch[50],f[15]=":SHUTTING DOWN:";
	
system("\nline.exe");
	{
//starting loop//
	{
int i,j;
printf("\nCONTENTS OF THE CALCULATOR :");
system("heading.exe");
printf("\n1 for algebra :\n2 for arithmatic :\n3 for calculus :");
printf("\n4 for geometry :\n5 for matrices :\n6 for fundamentals :\n7 for numericals\n\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\nALGEBRA CONTENT :");
system("heading.exe");
{ 
int i;
printf("\n1 for sum,\n2 for table,\n3 for quadratic,");
printf("\n4 for factorial,\n5 for ncr,\n6 for (X+Y)n expansion");
printf("\n7 for relation in three digits,\n8 array comp.\n9 sorting upto");
printf("\n10 for factorisation,\n11 for gcd&lcm\n12 for product");
printf("\n13 for progression.\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\nSEQUENTIAL SUM :\n");
system("\nline.exe");
{
int i,l;
float p,sum=0;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l);
system("\nline.exe");
for(i=0;i<l;i++)
{
	printf("give p%d :",i);
	scanf("%f",&p);
	printf("%f\n",p);
    sum=sum+p;
	printf("%d th sum :%f\n",i,sum);
	}
	

}        //sum//
}
else if(i==2)
{
printf("\nTABLE :\n");
system("\nline.exe");
{
	int i,j,l;
float p,q;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l);
system("\nline.exe");
for(j=0;j<l;j++)
{
printf("give any value of p:\t");
scanf("%f",&p);
printf("\n\n");
for(i=1;i<=10;i++)
{
	q=p*i;
	printf("%f*%d\t=\t%f\n\n",p,i,q);
}
system("\nline.exe");
}
}//table//
}
else if(i==3)
{
printf("\nQUADRATIC :\n");
system("\nline.exe");
{
int l,i;	
float a,b,c,discriminant,root1,root2;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l);
system("\nline.exe");
for(i=0;i<l;i++)
{
	printf("programming to determine the roots of a quadratic equation\n");
	printf("enter into the values of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	discriminant= b*b-4*a*c;
	if(discriminant<0)
	printf("the roots of the equation will be imaginary\n");
	else
   {
   root1=(-b+sqrt(discriminant))/2*a;
   root2=(-b-sqrt(discriminant))/2*a;
   printf("\n\nroot1=%f\n\nroot2=%f\n",root1,root2);
   }
   }
}//quadratic//
}
else if(i==4)
{
printf("\nFACTORIAL :\n");
system("\nline.exe");
{
int i,n,l,j,fact;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l);
system("\nline.exe");
for(j=0;j<l;j++)
{
printf("ENTER n:\t");
scanf("%d",&n);
if(n<0)
printf("syntex error\n");
else if(n==0)
printf("fact%d=1\n\n",n);
else
{
fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
 printf("fact%d=%d\n\n",n,fact);
}
}//factorial//
}
}
else if(i==5)
{
printf("\nNCR :\n");
system("\nline.exe");
{
int n,r,p,i,j,k,l,l1,factn,factr,factp;
float ncr;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(l=1;l<=l1;l++)        /*calculate upto 12*/
{
factn=factr=factp=1;
printf("\nENTER n&r :\n");
scanf("%d%d",&n,&r);
p=(n-r);
if(n==0||r==0||p==0)
printf("%dC%d=1\n",n,r);
else if(n<0||r<0||p<0)
printf("\nSYNTEX ERROR\n");
else
{
for(i=1;i<=n;i++)
{
factn=factn*i;	
}
for(j=1;j<=r;j++)
{
factr=factr*j;	
}
for(k=1;k<=p;k++)
{
factp=factp*k;	
}
ncr=factn/(factp*factr);
printf("\n%dC%d=%f\n",n,r,ncr);
}
}
}//ncr//
}
else if(i==6)
{
printf("\n(X+Y)n EXPANSION :\n");
system("\nline.exe");
{
int n,r,p,i,j,k,l,m,l1,factn,factr,factp,ncr; 
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(m=1;m<=l1;m++)
{
printf("\nENTER n:\n");
scanf("%d",&n);
printf("\n(X+Y)%d= ",n);
for(r=0;r<=n;r++)
{
p=(n-r);
factn=factr=factp=1;
if(n==0||r==0)
printf("Y%d+ ",n);
else if(n<0||r<0||p<0)
printf("\nSYNTEX ERROR\n");
else
{
for(i=1;i<=n;i++)                      //good to calculate upto 12//
{
factn=factn*i;	
}
for(j=1;j<=r;j++)
{
factr=factr*j;	
}
for(k=1;k<=p;k++)
{
factp=factp*k;	
}
ncr=factn/(factp*factr);
printf("%dX%dY%d + ",ncr,r,p);
}
}
printf("0\n\n");
}
}
}//(X+Y)n expansion//

else if(i==7)
{
printf("\nORDER RELATION :\n");
system("\nline.exe");
{
int a,b,c,i,l;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l);
system("\nline.exe");
for(i=0;i<l;i++)
{
     printf("give the values of a,b,c:\n");
     scanf("%d%d%d",&a,&b,&c);
     if(a>b)
	 {
	 if(c>a)
	 printf("%d>%d>%d\n",c,a,b);
	 else
	 {
	 	if(c<b)
	 printf("%d>%d>%d\n",a,b,c);
	 else
	 printf("%d>%d>%d\n",a,c,b);
	 }
	 }
	 else
	 {
	 if(b<c)
	 printf("%d>%d>%d\n",c,b,a);
	 else
	 {
	 if(c>a)
	 printf("%d>%d>%d\n",b,c,a);
	 else
	 printf("%d>%d>%d\n",b,a,c);
	 }
	 }
}
}//relation in three digits//
}
else if(i==8)
{
printf("\n :ARRAY COMPARISON:\n");
system("\nline.exe");
{
float a[100],big,small;
int i,n,j,l;
printf("ENTER THE LOOP NO :\n");           //:ARRAY COMPARISON://
scanf("%d",&l);
system("\nline.exe");
for(j=0;j<l;j++)
{
printf("\n ENTER THE NO OF ELEMENTS IN THE ARRAY :\t");
scanf("%d",&n);
system("\nline.exe");
printf("ENTER THE ELEMENTS:\n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
}
big=small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}
printf("\nBIGGEST NO:%f0\n",big);
printf("\nSMALLEST NO:%f0\n",small);
}//array comparison//
}
}
else if(i==9)
{
printf("\nSORTING UPTO :\n");
system("\nline.exe");
{
int n,j,i,r,j1,l1,cnt;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
	printf("enter a number  : \n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)			/*nested loop*/
	{
		cnt=0;
		
	for(i=1;i<=j;i++)
	{
		r=j%i;
		if(r==0)
		{
			cnt++;
		}	
	}
	if(cnt==2)
		printf("\n%d is prime",j);
	else	
		printf("\n%d is composite",j);
printf("\n");		
	}
system("\nline.exe");
}//sorting upto//
}
}
else if(i==10)
{
printf("\nFACTORISATION :\n");
system("\nline.exe");
{
int n,r,s,i,j,j1,l1,count;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("enter n :\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	count=0;
	r=n%i;
	if(r==0)
	{
		for(j=1;j<=i;j++)
		{
		s=i%j;
		if(s==0)
		count++;
		}
		if(count==2)
		printf("prime factor%d\n",i);
		else
	printf("composite factor%d\n",i);
	}
	else
	printf("");
}
system("\nline.exe");
}//factorisation//
}
}
else if(i==11)
{
printf("\nGCD & LCM :\n");
system("\nline.exe");
{
int a,b,p,i,q,r,m,n,G,j1,l1;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
 printf("give the values of a,b:\n");
 scanf("%d%d",&a,&b);
 q=a*b;
 for(i=1;i<=q;i++)
 {
 	r=q%i;
 	if(r==0)
 	{
 		m=i%a;
 		n=i%b;
 		
	 if(m==0&&n==0)
	 	{
	 		G=q/i;
	 printf("\t\tLCM=%d and GCD=%d\n\t\t\t",i,G);
	 	}
	 else
	 printf("");
	 }
	 else
	 printf("");
 }
system("\nline.exe");
}//gcd & lcm//
}
}
else if(i==12)
{
printf("\nSEQUENTIAL MULTIPLICATION :\n");
system("\nline.exe");
{
int i,l;
float p,pro=1;
printf("ENTER THE LOOP NO :\n\n");
scanf("%d",&l);
system("\nline.exe");
for(i=0;i<l;i++)
{
	printf("\ngive p%d:",i);
	scanf("%f",&p);
	printf("%f\n",p);
    pro=pro*p;
	printf("%d th PRODUCT: %f\n",i,pro);
	}
	

}        //SEQUENTIAL MULTIPLICATION//
}
else if(i==13)
{
printf("\n:PROGRESSION:\n");
system("\nline.exe");
{
int i;
printf("\n1 FOR ARITHMATIC PROGRESSION:\n");
printf("\n2 FOR GEOMETRIC PROGRESSION:\n");
printf("\n3 FOR HARMONIC PROGRESSION:\n");
system("\nline.exe");
printf("\nENTER THE CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\n:ARITHMATIC PROGRESSION:\n");
system("\nline.exe");
{
int i,n,j1,l1;
float a,d,term,sum;
printf("\n ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)             //:A.P SERIES://
{
printf("\ngive the 0th term:\n");
scanf("%f",&a);
printf("\ngive difference:\n");
scanf("%f",&d);
printf("\ngive n:\n");
scanf("%d",&n);
printf("0 th term :%f\n",a);
sum=a;
term=a;
for(i=1;i<n;i++)
{
term=term+d;
sum=sum+term;
printf("%d th term :%f\n",i,term);
}
printf("\nthe sum upto %d th term is :%f\n",n,sum);
system("\nline.exe");
}
//:ARITHMATIC PROGRESSION://
}
}
else if(i==2)
{
printf("\n:GEOMETRIC PROGRESSION:\n");
system("\nline.exe");	
{
int i,n,j1,l1;
float a,d,term,sum;
printf("\n ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)             //:G.P SERIES://
{
printf("\ngive the 0th term:\n");
scanf("%f",&a);
printf("\ncommon ratio:\n");
scanf("%f",&d);
printf("\ngive n:\n");
scanf("%d",&n);
printf("\n0 th term :%f\n",a);
sum=a;
term=a;
for(i=1;i<n;i++)
{
term=term*d;
sum=sum+term;
printf("%d th term :%f\n",i,term);
}
printf("\nthe sum upto %d th term is :%f\n",n,sum);
system("\nline.exe");
}
//:GEOMETRIC PROGRESSION://
}
}
else if(i==3)
{
printf("\n:HARMONIC PROGRESSION:\n");
system("\nline.exe");	
{
int i,n,j1,l1;
float a,d,term,sum;
printf("\n ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)             //:H.P SERIES://
{
printf("\ngive the 0th term:\n");
scanf("%f",&a);
printf("\nreciprocal difference:\n");
scanf("%f",&d);
printf("\ngive n:\n");
scanf("%d",&n);
printf("\n0 th term :%f\n",1/a);
sum=1/a;
term=1/a;
for(i=1;i<n;i++)
{
term=1/(a+i*d);
sum=sum+term;
printf("%d th term :%f\n",i,term);
}
printf("\nthe sum upto %d th term is :%f\n",n,sum);
system("\nline.exe");
}
//:HARMONIC PROGRESSION://		
}
}
//PROGRESSION//
}
}

else
{
printf("\nNO CONTENT\n");
}

}
//algebra portion//
}
 else if(i==2)
 {
 //arithmatic portion//
 printf("\nARITHMATIC CONTENT :");
 system("heading.exe");
 { 
int i;
printf("\n1 for simple interest,");
printf("\n2 for compound interest,\n3 for percentage.\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\nSIMPLE INTEREST :\n");
system("\nline.exe");
{
int n,j1,l1;
    float p,r,interest;
    printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
	printf("give the values of p,n,r:\n");
	scanf("%f%d%f",&p,&n,&r);
	interest=(p*n*r)/100;
	printf("\ninterest=%f\n\n",interest);
}        //simple interest//
}
}
else if(i==2)
{
printf("\nCOMPOUND INTEREST :\n");
system("\nline.exe");
{
int year,period,i,m,j1,l1;
float capital,interest;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("give the capital,interest,year,period:\n\n");
scanf("%f%f%d%d",&capital,&interest,&year,&period);
if(capital<=0)
printf("syntex error\n");
else
{
for(i=1;i<=year*period;i++)
{
	capital=capital*(1+interest/100);
}
printf("\ncapital=%f\n",capital);
}
}//compound interest//
}
}
else if(i==3)
{
printf("\n:PERCENTAGE:\n");
system("\nline.exe");
{
int x,y,b,j1,l1;
float s1,s2,v,a,m;
char c[60][60];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\ngive s1 out of s2\n");
scanf("%f%f",&s1,&s2);
v=(s1*100)/s2;
if(v==0)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200)
{
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//v==0//
else if(0<v&&v<=12.5)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&12.5*y<=v*x&&0<=y)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//12.5%//
if(12.5<v&&v<25)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
m=25-v;	
b=((x*x)/3)+(y*y);	
if(b<200&&m*y<12.5*x&&0<=y&&0<=x)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//<25%//
if(v==25)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&0<=x&&0<=y)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//==25%//
if(25<v&&v<=37.5)
{
	m=25-v;                        //ERROR APPEARS//
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&m*y<=12.5*x&&0<=y)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
//<=37.5%//
}
if(37.5<v&&v<50)
{
	m=v-50;
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&m*x<12.5*y&&0<=y)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//37.5<v&&v<50//
if(v==50)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&0<=y)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='²';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//==50%//
if(50<v&&v<=62.5)
{
	m=v-50;
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&12.5*y<=m*x&&y<=0)
{
c[x][y]='²';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='°';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//v<50&&v<=62.5//
if(62.5<v&&v<75)
{
	m=75-v;
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&m*y<12.5*x&&y<=0)
{
c[x][y]='²';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='°';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//62.5<v<75//
if(v==75)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&y<=0&&0<=x)
{
c[x][y]='²';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='°';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//v==75//
if(75<v&&v<87.5)
{
	m=75-v;
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200&&m*y<12.5*x&&y<=0&&0<=x)
{
c[x][y]='²';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='°';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//75<v&&v<=87.5//
if(87.5<=v&&v<100)
{
	m=v-100;
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);
if(b<200&&m*x<=12.5*y&&y<=0&&0<=x)
{
c[x][y]='²';
printf("%c",c[x][y]);
}
else if(b<200)
{                                       //AREA BOUNDED//
c[x][y]='°';
printf("%c",c[x][y]);
}

else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
}
//87.5<=v<100//
if(v==100)
{
for(y=15;-15<y;y--)
{
for(x=-30;x<30;x++)
{
b=((x*x)/3)+(y*y);	
if(b<200)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
else
{
c[x][y]=' ';
printf("%c",c[x][y]);
}
}
printf("\n");
}
//v==100//
}
for(y=3;-3<y;y--)
{
for(x=-5;x<5;x++)
{
c[x][y]='°';
printf("%c",c[x][y]);
}
printf("\n");
}
printf("\nTHIS IS S1\n\n");
for(y=3;-3<y;y--)
{
for(x=-5;x<5;x++)
{
c[x][y]='²';
printf("%c",c[x][y]);
}
printf("\n");
}
printf("\nTHIS IS (S2-S1)\n\n");

printf("%f IS %f PERCENT OF %f\n",s1,v,s2);
system("\nline.exe");
}
//:PERCENTAGE://
}
}
else
{
printf("\nNO CONTENT\n");
}

 }
 }
 
 else if(i==3)
 {
 //calculus portion//
 int i;
printf("\ncalculus content :");
system("heading.exe");
printf("\n1 for simple trigo diffn,");
printf("\n2 for polynomial diffn, ");
printf("\n3 for linear 2nd order diffn eqn with constant coefficients,\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\nSIMPLE TRIGO DIFFN :\n");
system("\nline.exe");
{
system("a.exe");	
}        //SIMPLE TRIGO DIFFN //
}
else if(i==2)
{
printf("\nPOLYNOMIAL DIFFN :\n");
system("\nline.exe");
{
int n,x,i,j1,l1;
float p[100],c[100],d[100],term,sum;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
	sum=0;
printf("ENTER THE HIGHEST POWER & VALUE OF x\t");
scanf("%d%d",&n,&x);
printf("ENTER THE VALUES OF COEFFICIENTS:\n");
for(i=1;i<=n;i++)
{
	scanf("%f",&c[i]);
}
printf("ENTER THE VALUES OF POWERS :\n");
for(i=1;i<=n;i++)
{
	scanf("%f",&p[i]);
}
printf("the polynomial is:\n");
for(i=1;i<=n;i++)
{
printf("%fX%f +",c[i],p[i]);
}
printf("CONSTANT\n\n");
for(i=1;i<=n;i++)
{
d[i]=c[i]*p[i];
}

printf("the differentiated polynomial is:\n");
for(i=1;i<=n;i++)
{
printf("%fX%f +",d[i],p[i]-1);
}
printf("0\n\n");
for(i=1;i<=n;i++)
{
term=d[i]*pow(x,p[i]-1);
sum=sum+term;
}
printf("the differentiated value:%f",sum);
system("\nline.exe");
}//POLYNOMIAL DIFFN//
}
}
else if(i==3)
{
printf("\n:LINEAR 2ND ORDER DIFFN EQN:\n(with constant coefficients):\n");
system("\nline.exe");
{
int j1,l1;
	float a,b,c,discriminant,d,e,f,m1,m2;
	printf("ENTER THE LOOP NO :\n");
    scanf("%d",&l1);
    system("\nline.exe");
	for(j1=0;j1<l1;j1++)
    {
	printf(":solving (aD2+bD+c)(y)=0:where D=d/dx\n\n");
	printf("give the values of a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nthe diffn eqn is (%fD2+%fD+%f)(y)=0:\n",a,b,c);
	discriminant= b*b-4*a*c;
	if(discriminant<0)
	{
	d=(4*a*c-b*b);
	e=sqrt(d);
	m1=(-b)/(2*a);
	m2=e/(2*a);
	printf("\nthe soln is :y=A exp(%f)x COS(%fx + B)\n",m1,m2);
	printf("\nwhere A & B are arbitary constants\n");
	}
	else if(discriminant==0)
	{
	m1=(-b)/(2*a);
	printf("\nthe soln is :y=(Ax+B)exp(%f)x\n",m1);
	printf("\nwhere A & B are arbitary constants\n");
	}
	else
   {
   	f=sqrt(discriminant);
   	m1=(-b)/(2*a);
   	m2=f/(2*a);
   printf("\nthe soln is :y=Aexp(%f)x + Bexp(%f)x\n",m1+m2,m1-m2);
   printf("\nor another soln is : exp(%f)x [A COSh(%f)x + B SINh(%f)x]\n",m1,m2,m2);
   printf("\nwhere A & B are arbitary constants \n& h denotes the hyperbolic function. \n");
   }
   printf("\n");
   }
 //:LINEAR 2ND ORDER DIFFN EQN://
}
}

else
{
printf("\nNO CONTENT\n");
}

 }
 else if(i==4)
 {
 //geometry portion//
 int i;
printf("\nGEOMETRY CONTENT :");
system("heading.exe");
printf("\n1 for about straight lines y=mx+c,");
printf("\n2 for about parabola y2=4ax,");
printf("\n3 for about parabola x2=4ay,\n4 for ellipse(x/a)2 + (y/b)2 = 1,");
printf("\n5 for rectangular hyperbola XY=A,\n6 for hyperbola(x/a)2 - (y/b)2 = 1\n7 for about triangle,");
printf("\n8 for TRIGO ANGLE TRANSFORMATION,");
printf("\n9 for MENSURATION,\n10 for point plotter.\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\n ABOUT STRAIGHT LINES Y=MX+C :\n");
system("\nline.exe");
{
int y,x,m,c1,j1,l1;
char c[60][60];
float X,Y;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\n enter m,c :\n");
scanf("%d%d",&m,&c1);
printf("\nDRAWING THE EQUATION y=%dx + %d :\n",m,c1);
for(y=30;y>-30;y--)                  //:ARNAB PROGRAMMING: PLOTTING//
{                                      
for(x=-30;x<30;x++)
{
	X=x/1;
	Y=y/1;
	if(Y==m*X+c1)
	{
	c[x][y]='.';	
	printf("%c",c[x][y]);
	}
	else if(X==0)
	{
	c[x][y]='I';
	printf("%c",c[x][y]);
	}
	else if(Y==0)
	{
	c[x][y]='_';
	printf("%c",c[x][y]);
	}
	else
	{
	c[x][y]=' ';	
	printf("%c",c[x][y]);
	}
}
printf("\n");
}
}

}        //ABOUT STRAIGHT LINES Y=MX+C //
}
else if(i==2)
{
printf("\nABOUT PARABOLA Y2=4AX :\n");
system("\nline.exe");
{
int y,x,x1,y1,a,l1,l2,j1,l3;
char c[60][60];
float X,Y;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l3);
system("\nline.exe");
for(j1=0;j1<l3;j1++)
{
printf("\nDRAWING THE EQUATION (Y-Y1)2=4A(X-X1):\n");
printf("\ngive a & vertex(x1,y1):\n");
scanf("%d%d%d",&a,&x1,&y1);
l1=2*a;
l2=4*a;

for(y=30;y>-30;y--)                  //:ARNAB PROGRAMMING: PLOTTING//
{
for(x=-30;x<30;x++)
{
	X=x-x1;
	Y=y-y1;
	if(Y*Y==4*a*X||X==a||X==-a)
	{
	c[x][y]='.';	
	printf("%c",c[x][y]);
	}
	else if(x==0)
	{
	c[x][y]='I';
	printf("%c",c[x][y]);
	}
	else if(y==0)
	{
	c[x][y]='_';
	printf("%c",c[x][y]);
	}
	else
	{
	c[x][y]=' ';	
	printf("%c",c[x][y]);
	}
}
printf("\n");
}
printf("\nITS VERTEX IS AT (%d,%d).\n",x1,y1);
printf("\nEQUn OF L.R: X=%d,EQUn OF D.R: X=%d\n",a+x1,-a+x1);
printf("\nLENGTH OF THE L.R :%d\n",l2);
printf("\nintersection of l.r & parabola :\nA(%d,%d)&B(%d,%d)\n",a,y1+l1,a,y1-l1);
printf("\n\n");
}
}//ABOUT PARABOLA Y2=4AX//
}

else if(i==3)
{
printf("\nABOUT PARABOLA (X-X1)2=4A(Y-Y1) :\n");
system("\nline.exe");
{
int y,x,x1,y1,a,l1,l2,j1,l3;
char c[60][60];
float X,Y;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l3);
system("\nline.exe");
for(j1=0;j1<l3;j1++)
{
printf("\nDRAWING THE EQUATION X2=4AY:\n");
printf("\ngive a & vertex(x1,y1) :\n");
scanf("%d%d%d",&a,&x1,&y1);
l1=2*a;
l2=4*a;

for(y=30;y>-30;y--)                  //:ARNAB PROGRAMMING: PLOTTING//
{
for(x=-30;x<30;x++)
{
	X=x-x1;
	Y=y-y1;
	if(X*X==4*a*Y||Y==a||Y==-a)
	{
	c[x][y]='.';	
	printf("%c",c[x][y]);
	}
	else if(x==0)
	{
	c[x][y]='I';
	printf("%c",c[x][y]);
	}
	else if(y==0)
	{
	c[x][y]='_';
	printf("%c",c[x][y]);
	}
	else
	{
	c[x][y]=' ';	
	printf("%c",c[x][y]);
	}
}
printf("\n");
}
printf("\nITS VERTEX IS AT (%d,%d).\n",x1,y1);
printf("\nEQUn OF L.R: Y=%d,EQUn OF D.R: Y=%d\n",a+y1,-a+y1);
printf("\nLENGTH OF THE L.R :%d\n",l2);
printf("\nintersection of l.r & parabola :\nA(%d,%d)&B(%d,%d)\n",x1+l1,a,x1-l1,a);
printf("\n\n");
}
}//ABOUT PARABOLA X2=4AY//
}
else if(i==4)
{
printf("\nELLIPSE : (X/A)2 + (Y/B)2 = 1\n");
system("\nline.exe");
{
int y,x,l1,j1;
float a,b,e,d,X,Y,g,h;
char c[60][60];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nDRAWING THE EQUATION (x/a)2 + (y/b)2 = 1 :\n");
printf("\ngive a & b :\n");
scanf("%f%f",&a,&b);
g=(b*b)/(a*a);
h=sqrt(1-g);
printf("\nDRAWING THE EQUATION (x/%f)2 + (y/%f)2 = 1 :\n",a,b);
for(y=30;y>-30;y--)                  //:ARNAB PROGRAMMING: PLOTTING//
{
for(x=-30;x<30;x++)
{
	e=(a*a);
	d=(b*b);
	X=(x*x)/e;
	Y=(y*y)/d;
	
	if(X+Y<=1.2&&1<=X+Y)
	{
	c[x][y]='.';	
	printf("%c",c[x][y]);
	}
	else if(x==0&&y!=0)
	{
	c[x][y]='I';
	printf("%c",c[x][y]);
	}
	else if(y==0&&x!=0)
	{
	c[x][y]='_';
	printf("%c",c[x][y]);
	}
	else if(x==0&&y==0)
	{
	c[x][y]='*';
	printf("%c",c[x][y]);
	}
	
	else
	{
	c[x][y]=' ';	
	printf("%c",c[x][y]);
	}
}
printf("\n");
}
printf("\nmajor axis :y=0; length :%f,minor axis :x=0; length :%f \n",2*a,2*b);
printf("\n eccentricy :(e)=%f\n",h);
printf("\nfocii : ( %f,0) & (-%f,0)\n",a*h,a*h);

}
printf("\n\n");
//ELLIPSE : (X/A)2 + (Y/B)2 = 1//
}
}

else if(i==5)
{
printf("\n:RECT-ANGULAR HYPERBOLA:\n");
system("\nline.exe");
{
int y,x,a,l1,j1;
char c[60][60];
float X,Y;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nDRAWING THE EQUATION XY=a:\n");
printf("\ngive a :\n");
scanf("%d",&a);
for(y=30;y>-30;y--)                  //:ARNAB PROGRAMMING: PLOTTING//
{
for(x=-30;x<30;x++)
{
	X=x/1;
	Y=y/1;
	if(X*Y==a)
	{
	c[x][y]='.';	
	printf("%c",c[x][y]);
	}
	else if(X==0)
	{
	c[x][y]='I';
	printf("%c",c[x][y]);
	}
	else if(Y==0)
	{
	c[x][y]='_';
	printf("%c",c[x][y]);
	}
	else
	{
	c[x][y]=' ';	
	printf("%c",c[x][y]);
	}
}
printf("\n");
}
}
printf("\n\n");
//:RECT-ANGULAR HYPERBOLA://
}
}
else if(i==6)
{
printf("\nHYPERBOLA (x/a)2 - (y/b)2 = 1 :\n");
system("\nline.exe");
{
int y,x,l1,j1;
float a,b,e,d,X,Y;
char c[60][60];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nDRAWING THE EQUATION (x/a)2 - (y/b)2 = 1 :\n");
printf("\ngive a & b :\n");
scanf("%f%f",&a,&b);
printf("\nDRAWING THE EQUATION (x/%f)2 - (y/%f)2 = 1 :\n",a,b);
for(y=30;y>-30;y--)                  //:ARNAB PROGRAMMING: PLOTTING//
{
for(x=-30;x<30;x++)
{
	e=(a*a);
	d=(b*b);
	X=(x*x)/e;
	Y=(y*y)/d;
	
	if(X-Y<=1.3&&1<=X-Y)
	{
	c[x][y]='.';	
	printf("%c",c[x][y]);
	}
	else if(x==0&&y!=0)
	{
	c[x][y]='I';
	printf("%c",c[x][y]);
	}
	else if(y==0&&x!=0)
	{
	c[x][y]='_';
	printf("%c",c[x][y]);
	}
	else if(x==0&&y==0)
	{
	c[x][y]='*';
	printf("%c",c[x][y]);
	}
	else
	{
	c[x][y]=' ';	
	printf("%c",c[x][y]);
	}
}
printf("\n");
}

printf("\n\n");
}

//HYPERBOLA (x/a)2 - (y/b)2 = 1 ://
}
}
else if(i==7)
{
printf("\n ABOUT TRIANGLE :\n");
system("\nline.exe");
{
int i,X1,Y1,j1,l1,dx12,dx23,dx31,dy12,dy23,dy31,x[3],y[3];
float m12,m23,m31,l12,l23,l31,c12,c23,c31,X,Y,area,det;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nANALYSING THE TRIANGLE :\n");
printf("\nENTER THE POINTS :\n");
for(i=1;i<=3;i++)
{
printf("(x%d,y%d):\n",i,i);
scanf("%d",&x[i]);
scanf("%d",&y[i]);
printf("(x%d,y%d) :(%d,%d)\n",i,i,x[i],y[i]);
}
printf("\nSO WE GET THE INFORMATIONS :\n");
system("heading.exe");
dy12=y[1]-y[2];
dx12=x[1]-x[2];
dy23=y[2]-y[3];
dx23=x[2]-x[3];
dy31=y[3]-y[1];
dx31=x[3]-x[1];
if(dx12==0)
{
m23=dy23/dx23;
m31=dy31/dx31;
c23=(y[2]-m23*x[2]);	
c31=(y[3]-m31*x[3]);
printf("\nGRADIENTS OF THE SIDES L12,L23,L31 ARE :m12=infinity,m23=%f,m31=%f units.\n",m23,m31);
printf("\EQUATION OF L12 IS : X=0 \n");
printf("\nEQUATION OF L23 IS : Y=%fX+%f \n",m23,c23);
printf("\nEQUATION OF L31 IS : Y=%fX+%f \n",m31,c31);
}
else if(dx23==0)
{
m12=dy12/dx12;	
m31=dy31/dx31;	
c12=(y[1]-m12*x[1]);
c31=(y[3]-m31*x[3]);
printf("\nGRADIENTS OF THE SIDES L12,L23,L31 ARE :m12=%f,m23=infinity,m31=%f units.\n",m12,m31);
printf("\nEQUATION OF L12 IS : Y=%fX+%f \n",m12,c12);	
printf("\nEQUATION OF L23 IS : X=0 \n");
printf("\nEQUATION OF L31 IS : Y=%fX+%f \n",m31,c31);
}
else if(dx31==0)
{
m12=dy12/dx12;
m23=dy23/dx23;
c12=(y[1]-m12*x[1]);
c23=(y[2]-m23*x[2]);
printf("\nGRADIENTS OF THE SIDES L12,L23,L31 ARE :m12=%f,m23=%f,m31=infinity units.\n",m12,m23);	
printf("\nEQUATION OF L12 IS : Y=%fX+%f \n",m12,c12);	
printf("\nEQUATION OF L23 IS : Y=%fX+%f \n",m23,c23);	
printf("\nEQUATION OF L31 IS : X=0\n");
}
else
{
m12=dy12/dx12;
m23=dy23/dx23;
m31=dy31/dx31;
printf("\nGRADIENTS OF THE SIDES L12,L23,L31 ARE :m12=%f,m23=%f,m31=%f units.\n",m12,m23,m31);
c12=(y[1]-m12*x[1]);
c23=(y[2]-m23*x[2]);	
c31=(y[3]-m31*x[3]);
printf("\nEQUATION OF L12 IS : Y=%fX+%f \n",m12,c12);	
printf("\nEQUATION OF L23 IS : Y=%fX+%f \n",m23,c23);
printf("\nEQUATION OF L31 IS : Y=%fX+%f \n",m31,c31);
}
l12=sqrt(dx12*dx12+dy12*dy12);
l23=sqrt(dx23*dx23+dy23*dy23);
l31=sqrt(dx31*dx31+dy31*dy31);
X1=x[1]+x[2]+x[3];
Y1=y[1]+y[2]+y[3];
X=X1/3;
Y=Y1/3;
det=x[2]*y[3]-x[3]*y[2]+x[1]*dy23-y[1]*dx23;
area=det/2;
if(area==0)
printf("\nTHE POINTS ARE COLLINEAR.\n");
else
printf("\nTHE AREA OF THE TRIANGLE IS : |%f| sq. unit.\n",area);
printf("\nLENGTHS OF THE SIDES L12 ,L23,L31 ARE :%f,%f,%f units.\n",l12,l23,l31);
printf("\nTHE CENTROID OF THE TRIANGLE IS :(%f,%f)approx\n",X,Y);
system("\nline.exe");
}

}        //ABOUT TRIANGLE //
}
else if(i==8)
{
printf("\nTRIGO ANGLE TRANSFIRMATION :\n");
system("\nline.exe");
{
int d,m,n,a,r,j1,l1,s,y1,y2,y3;
char ch[10];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nENTER THE FUNCTION :\n");	
scanf("%s",ch);
scanf("%d",&a);
y1=strcmp(ch,"sin");
y2=strcmp(ch,"cos");
y3=strcmp(ch,"tan");
r=a%90;
d=(a-r)/90;
s=90-r;
m=d%2;
n=d%4;
if(y1==0)
{
printf("\n the input is SIN%d degree\n",a);
if(m==0&&n==0)
printf("\n transformed ans : SIN%d degree OR COS%d degree\n",r,s);
else if(m==0&&n!=0)
printf("\n transformed ans : -SIN%d degree OR -COS%d degree\n",r,s);
else
{
if(n==1)	
printf("\n transformed ans :  COS%d degree OR SIN%d degree\n",r,s);
else //n==3//
printf("\n transformed ans : -COS%d degree OR -SIN%d degree\n",r,s);
}
}
else if(y2==0)
{
printf("\n the input is COS%d degree\n",a);
if(m==0&&n==0)
printf("\n transformed ans : COS%d degree OR SIN%d degree\n",r,s);
else if(m==0&&n!=0)
printf("\n transformed ans : -COS%d degree OR -SIN%d degree\n",r,s);
else
{
if(n==1)	
printf("\n transformed ans : -SIN%d degree OR -COS%d degree\n",r,s);
else //n==3//
printf("\n transformed ans :  SIN%d degree OR COS%d degree\n",r,s);
}
}
else if(y3==0)
{
printf("\n the input is TAN%d degree\n",a);
if(m==0&&n==0)
printf("\n transformed ans : TAN%d degree OR COT%d degree\n",r,s);
else if(m==0&&n!=0)
printf("\n transformed ans : TAN%d degree OR COT%d degree\n",r,s);
else
{
if(n==1)	
printf("\n transformed ans : -COT%d degree OR -TAN%d degree\n",r,s);
else //n==3//
printf("\n transformed ans : -COT%d degree OR -TAN%d degree\n",r,s);
}
}
else
printf("\nSYNTEX ERROR\n");
system("\nline.exe");
}

}
}
else if(i==9)
{
printf("\n:MENSURATION:\n");
system("\nline.exe");
{
int i;
printf("\n:REGULAR BODIES:");
system("heading.exe");
printf("\n1 for parallelopoid(cor: cube) :");//:ARNAB PROGRAMMING://
printf("\n2 for right circular cone :");
printf("\n3 for prism :");
printf("\n4 for pyramid :");
printf("\n5 for sphere :");
printf("\n6 for cylinder :\n\n");
system("\nline.exe");
printf("ENTER CODE:\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\n:PARALLELOPOID:\n");
system("\nline.exe");
{
int j1,l1;	
float a,b,c,s1,s2,s3,d,area,volume;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\ngive a,b,c :\n");
scanf("%f%f%f",&a,&b,&c);
if(a==b&&b==c)
{
printf("\nits a cube\n");
}
s1=a*b;
s2=b*c;
s3=c*a;
area=2*(s1 + s2 + s3);
d=sqrt(a*a + b*b + c*c);
printf("\nlength of diagonal :%f unit\n",d);
printf("\narea of three different faces: %f,%f,%f sq. unit\n",s1,s2,s3);
printf("\ntotal area of six faces :%f sq. unit\n",area);
volume=a*b*c;
printf("\nthe volume is :%f cube-unit\n",volume);
}                                   //:PARALLELOPOID://
//:PARALLELOPOID://
}	
}
if(i==2)
{
printf("\n:RIGHT CIRCULAR CONE:\n");
system("\nline.exe");
{
int j1,l1;
float r,l,h,c,area,volume;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\ngive r (radious of base); l (slant height) :\n");
scanf("%f%f",&r,&l);
h=sqrt(l*l - r*r);
c=3.14*r*l;
area=3.14*r*(r + l);
volume=(3.14*r*r*h)/3;
printf("\narea of the cone surface :%f sq. unit\n",c);
printf("\narea of the total surface :%f sq. unit\n",area);
printf("\nvolume of the cone :%f cube unit\n",volume);
}//:RIGHT CIRCULAR CONE://
}	
}
if(i==3)
{
printf("\n:REGULAR-PRISM:\n");
system("\nline.exe");
{
int j1,l1;	
float a,h,s,p,area,volume;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\ngive a,h :\n");
scanf("%f%f",&a,&h);
p=3*a;
s=(sqrt(3)*a*a)/4;
area=2*s + p*h;
printf("\narea of the base triangle :%f\n",s);
printf("\ntotal area of the regular prism :%f\n",area);
volume=s*h;
printf("\nthe volume is :%f\n",volume);
}                                   //:REGULAR-PRISM://
//:PRISM://
}	
}
if(i==4)
{
printf("\n:PYRAMID:\n");
system("\nline.exe");
{
int j1,l1,i;	
float a,h,s,l,p,r,area,volume;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\n1 for triangle base regular pyramid:");	
printf("\n2 for square base regular pyramid:");	
printf("\nENTER CODE :\n");
scanf("%d",&i);	
if(i==1)
{
printf("\ngive a (side of triangle),h (slant-height) :\n");
scanf("%f%f",&a,&h);
p=(a*a)/3;
l=sqrt(h*h - p);
s=(sqrt(3)*a*a)/4;
area=4*s;
printf("\nthe p.p height :%f \n",l);
printf("\narea of each triangle face :%f sq. unit\n",s);
printf("\ntotal area of the pyramid :%f sq. unit\n",area);
volume=(s*l)/3;
printf("\nthe volume is :%f cube unit\n",volume);
}

if(i==2)
{
printf("\ngive a(side of square),h(slant-height) :\n");
scanf("%f%f",&a,&h);
p=(a*a)/2;
l=sqrt(h*h - p);
r=sqrt(h*h - p/2);
s=(r*a)/2;
area=4*s + 2*p;
printf("\nthe p.p height :%f \n",l);
printf("\narea of each triangle face & square base :%f  &  %f sq. unit\n",s,2*p);
printf("\ntotal area of the pyramid :%f sq. unit\n",area);
volume=(a*a*l)/3;
printf("\nthe volume is :%f cube unit\n",volume);

}

}                                   //:PYRAMID://
//:PYRAMID://
}	
}
if(i==5)
{
printf("\n:SPHERE:\n");
system("\nline.exe");
{
int i,j1,l1;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\n1 for solid sphere: \n"); 
printf("\n2 for hollow sphere: \n");	
printf("\nENTER CODE: \n");
scanf("%d",&i);
if(i==1)
{
printf("\n:SOLID-SPHERE:\n");
{
   float r,area,volume;
   printf("\ngive radious :\n");
   scanf("%f",&r);
   area=4*3.14*r*r;
   volume=(4*3.14*r*r*r)/3;
   printf("the area of the surface is:%f\n",area);
   printf("the volume of the sphere is:%f\n",volume);                  //:SOLID-SPHERE://
}
}
if(i==2)
{
printf("\n:HOLLOW-SPHERE:\n");
{
 float r,R,area,volume;
   printf("\ngive inner radious & outer radious :\n");
   scanf("%f%f",&r,&R);
   area=4*3.14*(R*R + r*r);
   volume=(4*3.14*(R*R*R-r*r*r))/3;
   printf("the area of the surface is:%f(considering both inner & outer surface)\n",area);
   printf("the volume of the sphere is:%f\n",volume);                  //:HOLLOW-SPHERE://
}
}
}
//:SPHERE://
}	
}
if(i==6)
{
printf("\n:CYLINDER:\n");
system("\nline.exe");
{
int i,j1,l1;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\n1 for solid cylinder: \n"); 
printf("\n2 for hollow cylinder: \n");	
printf("\nENTER CODE: \n");
scanf("%d",&i);
if(i==1)
{
printf("\n:SOLID-CYLINDER:\n");
{
   float r,h,area,volume;
   printf("\ngive radious of base & height:\n");
   scanf("%f%f",&r,&h);
   area=2*3.14*r*h + 2*3.14*r*r;
   volume=(3.14*r*r*h);
   printf("the area of the whole surface is:%f\n",area);
   printf("the volume of the cylinder is:%f\n",volume);                  //:SOLID-CYLINDER://
}
}
if(i==2)
{
printf("\n:HOLLOW-CYLINDER:\n");
{
 float r,R,h,area,volume;
   printf("\ngive inner radious & outer radious & height:\n");
   scanf("%f%f%f",&r,&R,&h);
   area=2*3.14*h*(r + R) + 2*3.14*(R*R-r*r);
   volume=3.14*h*(R*R-r*r);
   printf("the area of the  whole surface is:%f\n",area);
   printf("the volume of the hollow cylinder is:%f\n",volume);           //:HOLLOW-CYLINDER://
}
}
}
//:CYLINDER://
}
}
//:MENSURATION://
}
}

else if(i==10)
{
printf("\n:POINT PLOTTER:\n");
system("\nline.exe");
{
int i,j1,l1,x[100],y[100],n,u,v;
char c[60][60];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nhow many points are to be plotted :\n");
scanf("%d",&n);	
printf("\nENTER THE POINTS :\n");
for(i=1;i<=n;i++)
{
printf("(x%d,y%d):\n",i,i);
scanf("%d",&x[i]);
scanf("%d",&y[i]);
printf("(x%d,y%d) :(%d,%d)\n",i,i,x[i],y[i]);
}
for(v=30;v>-30;v--)
{
for(u=-30;u<30;u++)
{
for(i=1;i<=n;i++)
{	
if(u==x[i]&&v==y[i])
{
c[u][v]='*';
printf("%c",c[u][v]);
}

}

 if(u==0)
{
c[u][v]='I';
printf("%c",c[u][v]);
}
else if(v==0)
{
c[u][v]='_';
printf("%c",c[u][v]);
}
else
{
c[u][v]=' ';
printf("%c",c[u][v]);
}

}
printf("\n");
}
for(i=1;i<=n;i++)
{
printf("%d(x%d,y%d) : (%d,%d)\n",i,i,i,x[i],y[i]);
}
}

//:POINT PLOTTER://
}
}

else
{
printf("\nNO CONTENT\n");
} 
}
 
 else if(i==5)
 {
 //matrix portion//
 int i;
printf("\nMATRIX CONTENT :");
system("heading.exe");
printf("\n1 for TRANSPOSITION,");
printf("\n2 for justification A*At=SYMMETRIC,");
printf("\n3 for matrix addition,");
printf("\n4 for matrix multiplication,");
printf("\n5 determinant of 3,3 matrix,");
printf("\n6 for crammer solution for 3,3\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\nTRANSPOSITION :\n");
system("\nline.exe");
{
int i,j,j1,l1,m,n,a[100][100],b[100][100];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
 printf("\nENTER THE NUMBERS OF THE ROWS & COLUMNS :\n");
 scanf("%d%d",&m,&n);      //transposition of matrix//
 for(i=1;i<=m;i++)
 {
 for(j=1;j<=n;j++)
 {
 	printf("\nenter a%d%d :",i,j);
 	scanf("%d",&a[i][j]);
 }
 }
 printf("\nTHE MATRIX A IS :\n");
 for(i=1;i<=m;i++)
 {
 for(j=1;j<=n;j++)
 {
 	printf("%d\t",a[i][j]);
 }
 printf("\n");
 }
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=m;j++)
 {
 	b[i][j]=a[j][i];
 }
 }
 printf("\nTHE At MATRIX IS :\n");
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=m;j++)
 {
 	printf("%d\t",b[i][j]);
 }
 printf("\n");
 }
}        //TRANSPOSITION//
}
}
else if(i==2)
{
printf("\nJUSTIFICATION A*At=SYMMETRIC :\n");
system("\nline.exe");
{
int i,j,j1,l1,k,n,m;
float sum,term,a[100][100],b[100][100],c[100][100];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nENTER THE POWER OF the MATRIX n(row),m(column) :\n");
scanf("%d%d",&n,&m);
for(i=1;i<=n;i++)
{                            //:ARNAB PROGRAMMING://
for(j=1;j<=m;j++)
{
printf("\nENTER:a%d%d\n",i,j);
scanf("%f",&a[i][j]);	
}
}
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
b[i][j]=a[j][i];		
}
}
printf("the matrix a is:\n\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=m;j++)
{
printf("%f\t",a[i][j]);	
}
printf("\n");
}
printf("the matrix b is:\n\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("%f\t",b[i][j]);	
}
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
	sum=0;
	for(k=1;k<=m;k++)
{
term=a[i][k]*b[k][j];
sum=sum+term;
}
c[i][j]=sum;
}
}
printf("the matrix c is:\n\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%f\t",c[i][j]);	
}
printf("\n");
}
printf("\nconclusion: WHICH IS A SYMMETRIC MATRIX\n");

}//JUSTIFICATION A*At=SYMMETRIC//
}
}
else if(i==3)
{
printf("\nMATRIX ADDITION :\n");
system("\nline.exe");
{
int i,j,j1,l1,m,n,a[100][100],b[100][100],c[100][100];
	printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
	printf("\nENTER THE POWER OF THE MATRICES m(rows),n(columns) :\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter value in a(%d,%d): ",i+1,j+1);
			scanf("%d",&a[i][j]);	
		}		
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nenter value in b(%d,%d): ",i+1,j+1);
			scanf("%d",&b[i][j]);	
		}		
	}
	
	printf("\nmatrix A :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");			
	}
	printf("\nmatrix B :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);	
		}
		printf("\n");		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}		
	}
	printf("\nmatrix c :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
			
		}
		printf("\n");		
	}
}

}//MATRIX ADDITION//
}
else if(i==4)
{
printf("\nMATRIX MULTIPLICATION :\n");
system("\nline.exe");
{
int i,j,k,m,n,j1,l1,p;
float sum,term,a[100][100],b[100][100],c[100][100];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nENTER THE HIGHEST POWER OF MATRIX A m(row),n(column):\n");
scanf("%d%d",&m,&n);
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("\nENTER:a%d%d\n",i,j);
scanf("%f",&a[i][j]);	
}
}
printf("\nENTER THE HIGHEST POWER OF MATRIX B %d(row),p(column):\n",n);
scanf("%d",&p);
for(i=1;i<=n;i++)
{
for(j=1;j<=p;j++)
{
printf("\nENTER:b%d%d\n",i,j);
scanf("%f",&b[i][j]);		
}
}
printf("the matrix A is:\n\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=n;j++)
{
printf("%f\t",a[i][j]);	
}
printf("\n");
}
printf("the matrix B is:\n\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=p;j++)
{
printf("%f\t",b[i][j]);	
}
printf("\n");
}
for(i=1;i<=m;i++)
{
for(j=1;j<=p;j++)
{
	sum=0;
	for(k=1;k<=n;k++)
{
term=a[i][k]*b[k][j];
sum=sum+term;
}
c[i][j]=sum;
}
}
printf("the matrix C is:\n\n");
for(i=1;i<=m;i++)
{
for(j=1;j<=p;j++)
{
printf("%f\t",c[i][j]);	
}
printf("\n");
}
}

}//MATRIX MULTIPLICATION//
}
else if(i==5)
{
printf("\n DETERMINANT OF 3,3 MATRIX :\n");
system("\nline.exe");
{
int i,j,j1,l1;
float a[3][3],det;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{              //:ARNAB PROGRAMMING://
printf("\nENTER THE ELEMENTS OF THE MATRIX :\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
	printf("\na%d%d :",i,j);
	scanf("%f",&a[i][j]);
}
}
printf("\nTHE MATRIX A IS :\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
	printf("%f\t",a[i][j]);
}
printf("\n");
}
det=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(a[2][1]*a[3][3]-a[2][3]*a[3][1])+a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
printf("\nTHE DETERMINANT VALUE OF A IS :%f\n",det);
}

}        //DETERMINANT OF 3,3 MATRIX //
}
else if(i==6)
{
printf("\nCRAMMER SOLUTION FOR 3,3 :\n");
system("\nline.exe");
{
int i,j,j1,l1;
float x,y,z,a[3][3],c1,c2,c3,det,det1,det2,det3;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{              //:ARNAB PROGRAMMING://
printf("\nENTER THE ELEMENTS OF THE core MATRIX :\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
	printf("\na%d%d :",i,j);
	scanf("%f",&a[i][j]);
}
}
printf("\nTHE MATRIX IS :\n");
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
	printf("%f\t",a[i][j]);
}
printf("\n");
}
printf("\nENTER THE CONSTANTS :\n");
scanf("%f%f%f",&c1,&c2,&c3);
printf("\nTHE EQUATIONS ARE :\n");
printf("\n%fx+%fy+%fz= %f\n",a[1][1],a[1][2],a[1][3],c1);
printf("\n%fx+%fy+%fz= %f\n",a[2][1],a[2][2],a[2][3],c2);
printf("\n%fx+%fy+%fz= %f\n",a[3][1],a[3][2],a[3][3],c3);
det=a[1][1]*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(a[2][1]*a[3][3]-a[2][3]*a[3][1])+a[1][3]*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
det1=c1*(a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2]*(c2*a[3][3]-a[2][3]*c3)+a[1][3]*(c2*a[3][2]-a[2][2]*c3);
det2=a[1][1]*(c2*a[3][3]-a[2][3]*c3)-c1*(a[2][1]*a[3][3]-a[2][3]*a[3][1])+a[1][3]*(a[2][1]*c3-c2*a[3][1]);
det3=a[1][1]*(a[2][2]*c3-c2*a[3][2])-a[1][2]*(a[2][1]*c3-c2*a[3][1])+c1*(a[2][1]*a[3][2]-a[2][2]*a[3][1]);
if(det==0)
{
if(det1==0&&det2==0&&det3==0)
printf("\nSYSTEM HAS INFINITELY MANY SOLUTIONS\n");	
else
printf("\nSYSTEM HAS NO SOLUTION\n");
}
else
{
x=det1/det;
y=det2/det;
z=det3/det;
printf("\nTHE SOLUTIONS ARE :x=%f, y=%f, z=%f \n",x,y,z);
}
}

}
}
else
{
printf("\nNO CONTENT\n");
}

 }
else if(i==6)
{
printf("\FUNDAMENTALS :");
system("heading.exe");
{
int i;
printf("\n1 for (Zn,+)composition table :");
printf("\n2 for e expansion value,\n3 for logarithomic table :");
printf("\n4 for divisibility of integers,\n5 for POW(X,N):x float,n integer :");
printf("\n6 for reading plotter.\n");
system("\nline.exe");
printf("\nENTER CODE :\n");
scanf("%d",&i);
system("\nline.exe");
if(i==1)
{
printf("\n: n(Zn,+) COMPOSITION TABLE :\n");
system("\nline.exe");
{
int i,j,j1,l1,n,z[1000][1000];
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nENTER THE NUMBER n :\n");
scanf("%d",&n);                      //:ARNAB PROGRAMMING://
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
	z[i][j]=(i+j)%n;
}
}
printf("\nTHE (Z%d,+)COMPOSITION TABLE IS :\n\n",n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
	printf("%d\t",z[i][j]);
}
printf("\n");
}
system("\nline.exe");
}
//: (Zn,+) COMPOSITION TABLE ://
}
}
else if(i==2)
{
printf("\n : e EXPANSIONAL VALUE :\n");
system("\nline.exe");
{
int i,j,j1,l1;
float x,term,sum;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nENTER x belongs to[0,1]:\n");
scanf("%f",&x);
sum=term=1;
for(i=1;i<=1000;i++)
{
term=term*x/i;
sum=sum+term;
}
printf("\npow(e,%f)=%f\n",x,sum);
}//: e EXPANSIONAL VALUE ://
}
}
else if(i==3)
{
printf("\n:LOGARITHOMIC TABLE:\n");
system("\nline.exe");
{
int i,j1,l1;
float x,sum,term,y,z,p;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{                                       //y==pow(z,n);(1+z)==x//
printf("\nENTER x belongs : \n");                
scanf("%f",&x);
if(x<=0)                            //:LOGARITHOMIC PROGRAMMING://
printf("\nSYNTEX ERROR\n");
else
{
z=(x-1)/(x+1);
sum=z;
y=z;
for(i=1;i<10000;i++)
{
y=y*z*z;
term=y/(2*i+1);
sum=sum+term;
}
p=(2*sum)/2.302584;
printf("\nloge(%f)=%f,log10(%f)=%f\n",x,2*sum,x,p);
}
}
//:LOGARITHOMIC TABLE://
}
}
else if(i==4)
{
printf("\n:DIVISIBILITY OF INTEGERS:\n");
system("\nline.exe");
{
int x,n,r,i,j1,l1;
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\nGIVE n & x :\n");
scanf("%d%d",&n,&x);
if(x==0)
printf("\nSYNTEX ERROR\n");
else
{
system("\nline.exe");	
printf("\n the no.s upto %d,which are divisible by %d  are :\n\n",n,x);
system("\nline.exe");
if(1<=n)
{
for(i=1;i<=n;i++)
{
r=i%x;
if(r==0)
printf(" %d ,\t",i);
else
printf("");
}
}
else
{
for(i=1;n<=i;i--)
{
r=i%x;
if(r==0)
printf(" %d ,\t",i);
else
printf("");
}

}
printf("\n");
system("\nline.exe");
}
}

}//:DIVISIBILITY OF INTEGERS://
}
else if(i==5)
{
printf("\n: POW(X,N):x float,n integer :\n");
system("\nline.exe");
{
int n,i,j1,l1;
float x,y;
printf("\nPOW(X,n): n is integer :\n");
printf("ENTER THE LOOP NO :\n");
scanf("%d",&l1);
system("\nline.exe");
for(j1=0;j1<l1;j1++)
{
printf("\ngive x & n :\n");
scanf("%f%d",&x,&n);
y=1;
if(0<n)
{	
for(i=1;i<=n;i++)
{
y=y*x;
}
}
else if(n==0)
printf("\npow(%f,%d)=1",x,n);
else
{
for(i=0;n<i;i--)
{
y=y/x;
}
}
printf("\n\npow(%f,%d)=%f",x,n,y);
}
//: POW(X,N):x float,n integer ://
}
}
else if(i==6)
{
printf("\n:READING PLOTTER:\n\n");
system("\nline.exe");
{
system("READING_PLOTTER.exe");
//:READING PLOTTER://
}
}
}
}
else if(i==7)
{
system("numeric.exe");
}

else
printf("\nNO CONTENT :\n");
	}
}
system("\nline.exe");
system("back.exe");
system("\nline.exe");
}

//void loop//}

#include<stdio.h>
void main()
{
int i,x;
char a[10000000]="
                                 
                                 °°°|  
                                 °°°|
							     
  °°°°°°   °°°°°°°°| °°      °°  °°°    °°°°   °°    °°°   
   °|   °   °|    °|  °°    °°|   °|   °|   °|  °°    °|       
   °|    °  °| °|     °|°  ° °|   °|   °|   °|  °|°   °|       
   °|    °  °°°°|     °| °°  °|   °|   °°°°°°|  °| °  °|      
   °|    °  °| °|     °|     °|   °|   °|   °|  °|  ° °|        
   °|   °   °|    °|  °|     °|   °|   °|   °|  °|   °°|          
  °°°°°°   °°°°°°°°| °°°    °°°  °°°  °°°  °°° °°°    °°     CALCULATOR...
";
x=strlen(a);
for(i=0;i<x;i++)
{
printf("%c",a[i]);
sleep(5);
}

}

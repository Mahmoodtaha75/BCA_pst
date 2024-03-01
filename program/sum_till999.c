#include<stdio.h>
#include<conio.h>

void main(){

     int x,sum=0;
     printf("enter the number both positive and negative");
     printf("\nenter 999 at the end:");

     while (1)
     {
        scanf("%d",&x);
        if(x==999)
          break;
        if (x>0)
        {
            sum=sum+x;
        }
        
     }
     printf("\n sum of the positive number entered is %d",sum);
    
     
}
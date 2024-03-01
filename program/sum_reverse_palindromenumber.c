#include<stdio.h>
#include<conio.h>

void main(){
    int num,sum=0,rev=0,d,x;

    printf("enter the number:");
     scanf("%d",&num);
     x=num;

     while(num){
        d=num%10;
        num=num/10;
        sum=sum+d;
        rev=rev*10+d;
     }
     printf("\n sum of digits= %d",sum);
     printf("\nreverse of the number =%d",rev);

     if(x==rev)
       printf("\n the number is palindrome");
       else{
        printf("\n the number is not palindrome");
       }
}
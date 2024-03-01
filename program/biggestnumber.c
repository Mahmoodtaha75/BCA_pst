#include<stdio.h>
#include<conio.h>

void main(){
    int num1, num2, num3;
    printf("enter any three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

     if (num1>=num2 && num1>=num3)
     {
        printf("%d is largest:",num1);
     }else if (num2>=num3)
     {
        printf("%d is largest",num2);
     }else{
        printf("%d is largest",num3);
     }
     
     
}
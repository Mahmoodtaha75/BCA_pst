#include<stdio.h>
#include<conio.h>

void main(){
    int num,i,flag=0;

    printf("enter a number:");
    scanf("%d",&num);

    for ( i = 2; i <= num/2; i++)
    {
        if (num %i == 0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("%d is not prime",num);
    }
    else{
        printf("%d is prime",num);
    }
    
    
}
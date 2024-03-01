#include<stdio.h>
#include<conio.h>

int main(){
    int rad;
    float PI=3.14, area, ci;
    printf("enter radius of circle:");
    scanf("%d",&rad);
    area = PI * rad * rad;
    printf("\narea of the circle:%f",area);
    //Circumference calculation
    ci= 2 * PI * rad;
    printf("\ncircumfrenece:%f\n",ci);
    return(0);
}
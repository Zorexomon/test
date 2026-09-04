#include<stdio.h>
int main(void){
    float a,b;
printf("Enter first number:\n");
scanf("%f",&a);
printf("Enter second number:\n");
scanf("%f",&b);
float s = a+b;
float d = a-b;
float p = a*b;
float q = a/b;
float r = a%b;
printf("Sum of two numbers:\n");
printf(s);
printf("Difference of two numbers:\n",d);
printf("Product of two numbers:\n",p);
printf("Quotient when first number is divided by second:\n",q);
printf("Remainder when first number is divided by second:\n",r);
}
#include<stdio.h>
int main()
{
    int a,b;
    printf(" enter the num1:");
    scanf("%d",&a);
    printf(" Enter the num2: ");
    scanf("%d",&b);
    printf("you enter a = %d and b = %d ",a,b);
    a=a-b;
    b=b+a;
    a=b-a;
    printf("\nthe swap value of a = %d and b = %d",a,b);
    return 0;
}
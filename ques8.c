#include<stdio.h>
int main(){
    int a;
    printf("Enter the integer: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number entered is positive integer.\n");
    }
    else if(a<0)
    {
        printf("The number entered is negative integer.\n");
    }
    else{
        printf("The number entered is zero.");
    }
    return 0;
}
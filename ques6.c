#include<stdio.h>
int main(){
    int a;
    printf("Enter The Number: ");
    scanf("%d", &a);
    if (a%2==0)  
    {
        printf("The Number Entered is Even");
    }
    else
    {
        printf("The Number Entered is odd");
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n, m, sum = 0;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    while (n>0){
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    printf("The sum of digits of a three digit number is %d.",sum);
    return 0;
}
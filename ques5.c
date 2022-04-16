#include<stdio.h>  
int main(){    
    // Swap without using third Variable
    printf("Swap without using third Variable\n");
    int a=10, b=20;      
    printf("Before swap a=%d b=%d",a,b);      
    a=a+b;//a=30 (10+20)    
    b=a-b;//b=10 (30-20)    
    a=a-b;//a=20 (30-10)    
    printf("\nAfter swap a=%d b=%d",a,b);    

    printf("\n\n\n");

    // Swap using third Variable 
    printf("Swap using third Variable");
    int x=10 , y=20;
    printf("\nBefore swap x=%d y=%d",x,y); 
    int temp =x ; 
    x = y;
    y = temp;

    printf("\nAfter swap x=%d y=%d",x,y); 
    return 0;  
}   
//to find greatest of two numbers 
#include<stdio.h>
void main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("A is greater \n");
    }
    else if (a==b)
    {
        printf("Both are equal\n");
    }
    else
    printf("B is greatest\n");
    
    
}
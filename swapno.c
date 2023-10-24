// to swap two values 
#include<stdio.h>
void main(){
    int a,b,temp;
    printf("Enter two values a,b to swap :");
    scanf("%d%d", &a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d after swaping a:\n",a);
    printf("%d after swaping b :\n",b);
}
// to assign grades 
#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks percentage :");
    scanf("%d",&m);
    if (m>75)
    {
        printf("your garde is O\n");
    }
    else if (m<=75 && m>=60)
    {
        printf("your garde is :A\n");
    }
    else if (m<=60 && m>=50)
    {
        printf("your garde is :B\n");
    }
    else if (m<50)
    {
         printf("your garde is :C\n");
    }
    return 0;
}
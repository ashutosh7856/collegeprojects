#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    int n2,sz;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n); //dynamic memory allocation
    for(int i=0; i<n; i++){
        printf("\n Enter element %d : ",i+1);
        scanf("d",&arr[i]);
    }
    printf("Enter 1 to delete and how many:");
    scanf("%d%d",&n2,&sz);
    while(1){
        if(n2==1){
            arr=(int*)realloc(sizeof(int)*(n-sz));
            n -= sz;
            for(int i=0; i<n-sz;i++){
                printf("%d",&arr[i]);
            }
            break;
        }
    }
}
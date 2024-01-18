#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *arr;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++){
        printf("\n Enter element of arr[%d] : ",i+1);
        scanf("%d", &arr[i]);

    }
    int biggest =arr[0];
    int lowest = arr[0];
    for(int i=1;i<n;i++) {

        if(biggest < arr[i])

        biggest = arr[i];

        if(lowest > arr[i])
        lowest = arr[i];

        }
        
        printf("biggest element in array :%d\n", biggest);
        printf("\n smallest element in array:%d\n", lowest);
 free(arr);   
}
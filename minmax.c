#include <stdio.h>
#include<stdlib.h>

int main() {
   int n;
   int *arr;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   arr =(int*)malloc(n*sizeof(int));
   printf("Enter the elements of array: ");
   for(int i =0 ; i<n; i++){
       scanf("%d",arr+i));
   }
   int min=arr[0];
   int max=arr[0];
   for (int i =1; i<=n; i++){
       if (arr[i]>max){
           max=arr[i];
       }
       else if (arr[i]<min){
           min=arr[i];
       }
   }
  printf("Greatest element in the array is :%d",max);
  printf("Smallest element in the array is :%d",min);
   
    return 0;
} 

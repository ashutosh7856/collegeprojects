#include<stdio.h>
void sort(int array[],int size){
    for(int i=0; i<size-1;i++){
        for(int j=0; j<size-1;j++){
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
void printarr(int array[],int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
}
int main(){
 int   array[5];
    printf("Enter value of array ");
    for (int i=0; i<=5; i++){
        scanf("%d",&array[i]);
    }
  int  size=sizeof(array)/sizeof(array[0]);
 sort(array,size);
  printarr(array, size);
  return 0;
}
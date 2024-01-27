#include<stdio.h>
#include<stdlib.h>
int main(){
    int radius;
    float area , perimeter;
    printf("\nEnter the value of radius : ");
    scanf("d",&radius);
    //Calculating Area using formula= 3.14 * r^2
    areaperi(radius , &area , &perimeter);
    printf("area of circle is %f",area);
    printf("\nperimeter of circle is %f" ,perimeter);
    return 0;
}
 areaperi(int r,float *a,float *p) {
    *a=3.14*r*r;
    *p=2*3.14*r;
}
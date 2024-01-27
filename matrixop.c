#include <stdio.h>

int main() {
    int a[2][2];
    int b[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("Enter the matrix a[%d][%d]: ",i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("Enter the matrix b[%d][%d]: ",i+1 , j+1);
            scanf("%d",&b[i][j]);
        }
        }
    int C_addition[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C_addition[i][j] = a[i][j] + b[i][j];
        }
    }

    // Matrix Subtraction
    int C_subtraction[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C_subtraction[i][j] = a[i][j] - b[i][j];
        }
    }

    // Matrix Multiplication
    int C_multiplication[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sum = 0;
            for (int k = 0; k < 2; k++) {
                sum += a[i][k] * b[k][j];
            }
            C_multiplication[i][j] = sum;
        }
    }

    // Matrix Transpose for A
    int C_transpose_a[2][2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C_transpose_a[j][i] = a[i][j];
        }
    }
    printf("Addition\n");
     for (int i=0; i<2; i++){
      for (int j=0; j<2; j++){
          printf("%2d",C_addition[i][j]);
      }
      printf("\n");
     } 
     printf("Subtraction\n");
     for (int i=0; i<2; i++){
      for (int j=0; j<2; j++){
          printf("%2d",C_subtraction[i][j]);
      }
      printf("\n");
     } 
     printf("Multiplication\n");
     for (int i=0; i<2; i++){
      for (int j=0; j<2; j++){
          printf("%2d",C_multiplication[i][j]);
      }
      printf("\n");
     } 
     printf("Transpose\n");
     for (int i=0; i<2; i++){
      for (int j=0; j<2; j++){
          printf("%2d",C_transpose_a[i][j]);
      }
      printf("\n");
     } 
  

 
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int *arr;
int size;

void PrintArray() {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Enter the size of array :");
    scanf("%d",&size);
    arr = (int*)malloc(size * sizeof(int));
    printf("Enter the array elements :");
    for (int i=0; i<size; i++){
        scanf("%d",arr+i);
    }

    int choice, position, element;

    while (1) {
        printf("\n1. Insert Element\n2. Delete Element\n3. Print Array\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position and element to insert: ");
                scanf("%d %d", &position, &element);
              
                arr = (int*)realloc(arr,(size+1) * sizeof(int));
                for (int i = size - 1; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = element;

                PrintArray();
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);

                if (position < 0 || position >= size) {
                    printf("Invalid position\n");
                } else {
                    for (int i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                  
                    arr = (int*)realloc(arr,(size-1) * sizeof(int));
                }

                PrintArray();
                break;

            case 3:
                PrintArray();
                break;

            case 4:
                free(arr);
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}


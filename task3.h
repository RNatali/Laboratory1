#include <stdio.h>

void input(int* arr, int size){
    printf("Enter %d elements: ", size);

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrangeArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            int current = i;
            int j = current - 1;
            while(j >= 0 && arr[j] >= 0) {
                swap(&arr[current], &arr[j]);
                current--;
                j--;
            }
        }
    }
}


void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main() {
    int arr[50];
    int size = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    input(arr, size);

    rearrangeArray(arr, size);

    printArray(arr, size);
}








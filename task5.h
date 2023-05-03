#include <stdio.h>

#define N 3 // змініть це значення на розмір масиву, який ви хочете повернути

void rotate(int arr[N][N], int angle) {
    for (int k = 0; k < angle / 90; k++) {
        for (int i = 0; i < N/2; i++) {
            for (int j = i; j < N-i-1; j++) {
                int temp = *(*(arr+i)+j);
                *(*(arr+i)+j) = *(*(arr+N-j-1)+i);
                *(*(arr+N-j-1)+i) = *(*(arr+N-i-1)+N-j-1);
                *(*(arr+N-i-1)+N-j-1) = *(*(arr+j)+N-i-1);
                *(*(arr+j)+N-i-1) = temp;
            }
        }
    }
}

void printArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
}

int main() {
    int arr[N][N] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    printf("Оригінальний масив:\n");
    printArray(arr);

    printf("\nМасив, повернутий на 90 градусів:\n");
    rotate(arr, 90);
    printArray(arr);

    printf("\nМасив, повернутий на 180 градусів:\n");
    rotate(arr, 180);
    printArray(arr);

    printf("\nМасив, повернутий на 270 градусів:\n");
    rotate(arr, 270);
    printArray(arr);

    return 0;
}


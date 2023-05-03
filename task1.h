#include <stdio.h>

void read_array(int arr[], int size, const char name[]) {
//зчитує масив та присвоює його до масиву arr 
    printf("Введіть масив %s:\n", name);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int size) {
//функція яка вводить переданий масив arr
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sum_diff_arrays(int a[], int b[], int c[], int n) {
//функція яка обчислює суму та різницю
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
        c[i+n] = a[i+n] - b[i+n];
    }
}

void process_arrays() {
    int n;
    printf("Введіть значення n: ");
    scanf("%d", &n);
    int a[2*n], b[2*n], c[2*n];
    read_array(a, 2*n, "A");
    read_array(b, 2*n, "B");
    sum_diff_arrays(a, b, c, n);
    printf("Масив С:\n");
    print_array(c, 2*n);
}

int main (){
    process_arrays();
}




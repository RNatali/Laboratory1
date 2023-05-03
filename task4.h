#include <stdio.h>

void find_missing_numbers(int n, int *a, int K, int L) {
    int i, j, found;

    for (i = K; i <= L; i++) {
        found = 0;
       
        for (j = 0; j < n; j++) {
            if (a[j] == i) {
                found = 1;
                break;
            }
        }
        
        if (!found) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n = 6;
    int a[] = {1, 3, 5, 7, 9, 11};
    int K = 0;
    int L = 12;

    find_missing_numbers(n, a, K, L);

    return 0;
}


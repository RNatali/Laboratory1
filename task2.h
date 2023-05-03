#include <stdio.h>

void read_array(int a[], int n);
int find_first_t_index(int a[], int n, int t);
int find_max_negative_index(int a[], int n, int first_t_index);

int main() {
  int n, t, first_t_index, max_negative_index;
  int a[100];
  
  printf("Введіть розмір масиву: ");
  scanf("%d", &n);
  
  printf("Введіть елементи масиву: ");
  read_array(a, n);
  
  printf("Введіть значення T: ");
  scanf("%d", &t);
  
  first_t_index = find_first_t_index(a, n, t);
  max_negative_index = find_max_negative_index(a, n, first_t_index);
  
  if(max_negative_index >= 0) {
    printf("Номер першого максимального від'ємного елемента, праворуч від T: %d\n", max_negative_index);
  } else {
    printf("У масиві немає від'ємних елементів, праворуч від T\n");
  }
  
  return 0;
}

void read_array(int a[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
}

int find_first_t_index(int a[], int n, int t) {
  int i;
  for(i = 0; i < n; i++) {
    if(a[i] == t) {
      return i;
    }
  }
  return -1;
}

int find_max_negative_index(int a[], int n, int first_t_index) {
  int i, max_negative_index = -1;
  for(i = first_t_index + 1; i < n; i++) {
    if(a[i] < 0) {
      max_negative_index = i;
      break;
    }
  }
  
  for(i = max_negative_index + 1; i < n; i++) {
    if(a[i] < 0 && a[i] > a[max_negative_index]) {
      max_negative_index = i;
    }
  }
  
  return max_negative_index;
}


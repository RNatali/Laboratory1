#include"arr.h"
#include"task1.h"
#include"task2.h"
#include"task3.h"
#include"task4.h"
#include"task5.h"

void print_menu();
int run_task(int *num_task, int *pa, int *pb, int **pa5,  int n, int pn5);
void choose_task(int *num_task);


int main(){
    int *a, *b, **a5;
    int n, n5;
    int num_task;

    print_menu();
    run_task(&num_task, a, b, a5, n, n5);
}

void print_menu(){
    printf("______________________________________________________________________________________________________________________\n");
    printf("Доступні функції:\n");
    printf("1.task_1\n");
    printf("2.task_2\n");
    printf("3.task_3\n");
    printf("4.task_4\n");
    printf("5.task_5\n");
    printf("Якщо бажаєте вийти з меню натисніть 0\n");
}

void choose_task(int *num_task){
    scanf("%d",num_task);
}
int run_task(int *num_task, int *pa, int *pb, int **pa5,  int n, int pn5){

    while(1){
        printf("Виберіть номер функції: ");
        choose_task(num_task);


        switch(*num_task){
            case 1: task_1(pa, n); break;
            case 2: task_2(pa, n); break;
            case 3: task_3(pa, n); break;
            case 4: task_4(pa, n); break;
            case 5: task_5(pa5, pn5); break;
            default: printf("Программа закінчена"); return 0 ; break;
        }
    }
}

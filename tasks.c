#include <stdio.h>

int shared_counter = 0;






void run_tasks() {
    for (int i = 1; i <= 10; i++) {
        shared_counter += 2;
        printf("Task B -> %d\n", shared_counter);
    }
}

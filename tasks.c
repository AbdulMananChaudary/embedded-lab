
#include <stdio.h>

int shared_counter = 0;

void run_tasks() {
    for (int i = 1; i <= 5; i++) {
        shared_counter++;
        printf("Task A -> %d\n", shared_counter);
    }


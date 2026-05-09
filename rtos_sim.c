#include <stdio.h>
#include <unistd.h>

int shared_counter = 0;

void taskA() {
    for (int i = 0; i < 5; i++) {
        int temp = shared_counter;
        temp++;
        shared_counter = temp;

        printf("Task A -> %d\n", shared_counter);
        usleep(200000);
    }
}

void taskB() {
    for (int i = 0; i < 5; i++) {
        int temp = shared_counter;
        temp++;
        shared_counter = temp;

        printf("Task B -> %d\n", shared_counter);
        usleep(200000);
    }
}

int main() {
    taskA();
    taskB();
    return 0;
}

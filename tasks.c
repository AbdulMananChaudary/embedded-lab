void run_tasks() {
    for (int i = 1; i <= 5; i++) {
        shared_counter += 2;
        printf("Task B -> %d\n", shared_counter);
    }
}

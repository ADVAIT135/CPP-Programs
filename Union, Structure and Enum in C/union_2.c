// Union in C -- 2

#include <stdio.h>

union job{
    
    float salary;
    int worker_id;
}job;

int main() {
    job.salary = 4500000.50;
    job.worker_id = 101;

    printf("Worker ID: %d\n", job.worker_id);
    printf("Salary: %.1f\n", job.salary); 

    return 0;
}
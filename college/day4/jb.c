#include <stdio.h>
#include <stdlib.h>

#define MAX_JOBS 100

typedef struct {
    int id;
    int deadline;
    int profit;
} Job;

// Sorting jobs by decreasing profit
void sort_jobs_by_profit(Job jobs[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (jobs[j].profit < jobs[j + 1].profit) {
                Job temp = jobs[j];
                jobs[j] = jobs[j + 1];
                jobs[j + 1] = temp;
            }
        }
    }
}

// Printing job sequence and total profit
void print_job_sequence(Job jobs[], int n) {
    int i, j;
    int total_profit = 0;
    int max_deadline = 0;

    // Find maximum deadline to size slots
    for (i = 0; i < n; i++) {
        if (jobs[i].deadline > max_deadline) {
            max_deadline = jobs[i].deadline;
        }
    }

    int slots[max_deadline];
    for (i = 0; i < max_deadline; i++) {
        slots[i] = -1; // Initialize all slots as free
    }

    // Assign jobs to slots
    for (i = 0; i < n; i++) {
        for (j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slots[j] == -1) {
                slots[j] = i; // Assign job to this slot
                total_profit += jobs[i].profit;
                break;
            }
        }
    }

    printf("\nJob Sequence: ");
    for (i = 0; i < max_deadline; i++) {
        if (slots[i] != -1) {
            printf("%d ", jobs[slots[i]].id);
        }
    }
    printf("\nTotal Profit: %d\n", total_profit);
}

int main() {
    int n, i;
    Job jobs[MAX_JOBS];

    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    printf("Enter the deadline and profit of each job:\n");
    for (i = 0; i < n; i++) {
        printf("Job %d: ", i + 1);
        scanf("%d %d", &jobs[i].deadline, &jobs[i].profit);
        jobs[i].id = i + 1; // Assign job ID
    }

    sort_jobs_by_profit(jobs, n);
    print_job_sequence(jobs, n);

    return 0;
}

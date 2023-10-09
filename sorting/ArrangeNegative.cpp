#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define ARRAY_SIZE 1000
#define NUM_THREADS 10

// Function to perform parallel selection sort
void selectionSortParallel(int arr[], int n) {
    int i, j, min_idx;

    // Begin a parallel region with a specified number of threads
    #pragma omp parallel num_threads(NUM_THREADS) private(min_idx, i, j)
    {
        // Parallelize the outer loop of selection sort
        #pragma omp for
        for (i = 0; i < n-1; i++) {
            min_idx = i;

            // Find the index of the minimum element in the unsorted part
            for (j = i+1; j < n; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }

            // Swap the found minimum element with the first element
            if (min_idx != i) {
                int temp = arr[i];
                arr[i] = arr[min_idx];
                arr[min_idx] = temp;
            }
        }
    }
}

int main() {
    // Print thread numbers using a parallel region and omp_get_thread_num()
    #pragma omp parallel num_threads(10)
    printf("Hi, I'm thread number %d!\n", omp_get_thread_num());

    // Parallel loop with thread-specific iteration printing
    #pragma omp parallel for num_threads(10)
    for (int i = 0; i < 20; i++) {
        printf("\nThread number %d, executing iteration %d...", omp_get_thread_num(), i);
    }

    int arr[ARRAY_SIZE];

    // Initialize the array with random values
    srand(123); // Seed for reproducibility
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 1000;
    }

    printf("Unsorted array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }

    // Call the parallel selection sort function
    selectionSortParallel(arr, ARRAY_SIZE);
    printf("\n\nSorted array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

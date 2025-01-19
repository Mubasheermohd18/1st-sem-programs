#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define MAX 4  

int matrixA[MAX][MAX];
int matrixB[MAX][MAX];
int result[MAX][MAX];


typedef struct {
    int row;
    int col;
} ThreadData;


void *multiply(void *arg) {
    ThreadData *data = (ThreadData *) arg;
    int row = data->row;
    int col = data->col;
    

    result[row][col] = 0;
    for (int i = 0; i < MAX; i++) {
        result[row][col] += matrixA[row][i] * matrixB[i][col];
    }

    pthread_exit(0);
}

int main() {
    pthread_t threads[MAX * MAX];
    ThreadData thread_data[MAX * MAX];
    int thread_count = 0;

    
    printf("Enter elements of matrix A (size %dx%d):\n", MAX, MAX);
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of matrix B (size %dx%d):\n", MAX, MAX);
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            thread_data[thread_count].row = i;
            thread_data[thread_count].col = j;
            pthread_create(&threads[thread_count], NULL, multiply, (void *) &thread_data[thread_count]);
            thread_count++;
        }
    }

   
    for (int i = 0; i < thread_count; i++) {
        pthread_join(threads[i], NULL);
    }

   
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int A [8][8] = {
        {2,1,1,1,1,1,1,1},
        {1,7,1,1,1,1,1,1},
        {1,1,3,1,1,1,1,1},
        {1,1,1,10,1,1,1,1},
        {1,1,1,1,2,1,1,1},
        {1,1,1,1,1,9,1,1},
        {1,1,1,1,1,1,7,1},
        {1,1,1,1,1,1,1,6},
            };
        printf("Matrix is:\n");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                printf("%4d", A[i][j]);
            }
            printf("\n");
        }
        printf("\n");

int F, i;
int L = 0;
int n =8;
int R = n - 1;
int T;
    do {
        F = 0;
        for (i = L; i < R; i++) {
            if (A[i][i] < A[i+1][i+1]) {
                T = A[i][i];
                A[i][i] = A[i+1][i+1];
                A[i+1][i+1] = T;
                F = 1;
            }
        }
        R--;
        for (i = R; i > L; i--) {
            if (A[i][i] > A[i-1][i-1]) {
                T = A[i][i];
                A[i][i] = A[i-1][i-1];
                A[i-1][i-1] = T;
                F = 1;
            }
        }
        L++;
    }
    while (L < R && F == 1);

    printf("New Matrix is:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

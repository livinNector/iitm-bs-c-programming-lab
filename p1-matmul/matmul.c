#include <stdio.h>
#include <time.h>

// while compiling use -D DIM=5 to change the dimensions to 5
#ifndef DIM
#define DIM 3
#endif

double gettime() {
        struct timespec t;
        timespec_get(&t, TIME_UTC);
        unsigned long tvsec = t.tv_sec;
        unsigned long tvnsec = t.tv_nsec;
        return tvsec + 1e-9 * tvnsec;
}

void read_mat(char* filename, float A[DIM][DIM]) {

}

void matmul(float A[DIM][DIM], float B[DIM][DIM], float C[DIM][DIM]) {

}

/**
 * @brief print a Matrix in rows and columns
 * 
 * @param A: 2-D matrix
 * 
 * Print the matrix out so that each row is on one line.  Example:
 * A[0][0] A[0][1] A[0][2]
 * A[1][0] A[1][1] ... etc.
 */
void print_mat(float A[DIM][DIM]) {

}

int main() {
    float A[DIM][DIM];
    float B[DIM][DIM];
    float C[DIM][DIM];
    
    // Task 1: Read Matrix A and B and print them
    printf("Dimension of the matrices: %d\n", DIM);

    read_mat("a.txt", A);
    read_mat("b.txt", B);

    printf("Matrix A: \n");
    print_mat(A);

    printf("Matrix B: \n");
    print_mat(B);

    // Task 2: Perform Matrix multiplication
    // Uncomment the below part after doing task 1.

    // double t1 = gettime();
    // // Declare a matrix C and use it for multiplication
    // matmul(A, B, C);
    // double t2 = gettime();
    // printf("Matrix C: \n");
    // print_mat(C);

    // printf("Time taken: %8.4g milliseconds\n", (t2-t1)*1000);
}
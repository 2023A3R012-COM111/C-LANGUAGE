// Write a program in C to perform matrix multiplication.
#include <stdio.h>

void multiplyMatrices(int firstMatrix[][3], int secondMatrix[][3], int resultMatrix[][3], int rowFirst, int colFirst, int rowSecond, int colSecond)
{
    // Initializing elements of resultMatrix to 0
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            resultMatrix[i][j] = 0;
        }
    }
    // Multiplying firstMatrix and secondMatrix and storing in resultMatrix
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            for (int k = 0; k < colFirst; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[][3], int row, int col) {
    printf("Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;
    // Input dimensions of the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    // Input dimensions of the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    int firstMatrix[rowFirst][3], secondMatrix[rowSecond][3], resultMatrix[rowFirst][3];
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colFirst; ++j) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, colFirst, rowSecond, colSecond);
    // Displaying the matrices
    displayMatrix(firstMatrix, rowFirst, colFirst);
    printf("\nMultiplied by\n\n");
    displayMatrix(secondMatrix, rowSecond, colSecond);
    printf("\nEquals\n\n");
    displayMatrix(resultMatrix, rowFirst, colSecond);
    return 0;
}

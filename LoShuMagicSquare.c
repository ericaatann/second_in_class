#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool isMagicSquare(int mat[3][3])
{
    // calculate the sum of
    // the prime diagonal
    int sum = 0;
    for (int i = 0; i <= 2; i++)
        sum = sum + mat[i][i];

    // For sums of Rows
    for (int i = 0; i <= 2; i++)
    {

        int rowSum = 0;
        for (int j = 0; j <= 2; j++)
            rowSum += mat[i][j];

        // check if every row sum is
        // equal to prime diagonal sum
        if (rowSum != sum)
            return false;
    }

    // For sums of Columns
    for (int i = 0; i <= 2; i++)
    {

        int colSum = 0;
        for (int j = 0; j <= 2; j++)
            colSum += mat[j][i];

        // check if every column sum is
        // equal to prime diagonal sum
        if (sum != colSum)
            return false;
    }

    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, temp;
    int n = 9;
    int count;

    do
    {
        for (i = n - 1; i >= 0; i--)
        {
            int j = rand() % 9;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                matrix[i][j] = arr[3 * i + j];
            }
            count++;
        }

        printf("\nSquares generated: %d ", count);
        for (i = 0; i < 3; i++)
        {

            printf("\n");
            printf("[ ");

            for (j = 0; j < 3; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("]");
        }

    } while (!isMagicSquare(matrix));

    printf("\nSuccess! You have found a magic square.");
    return 0;
}

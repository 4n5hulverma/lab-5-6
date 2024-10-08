// PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX.

#include <stdio.h>

int main()
{
    int a[3][3];
    printf("Enter elements of  1st matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[3][3];
    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int resultant_matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultant_matrix[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                resultant_matrix[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", resultant_matrix[i][j]);
        }
        printf("\n");
    }
}
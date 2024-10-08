//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS
#include <stdio.h>
int main()
{
    int matrix[3][3], sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
        
    }
    printf("\nsum of all rows is %d",sum);
}
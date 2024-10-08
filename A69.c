// PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nenter the elements in array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("\nenter the number you want to check in array :");
    scanf("%d", &x);

    int check = 0; // false
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            check = 1;
            break; // true
        }
    }
    if (check == 0)
    {
        printf("\n%d is not present in array", x);
    }
    else
    {
        printf("\n%d present in array", x);
    }
    return 0;
}
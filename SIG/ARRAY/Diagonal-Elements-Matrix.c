#include <stdio.h>

int main()
{
    int a[3][3], i, j;

    printf("Enter 9 elements for the 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    
    printf("\nMain diagonal elements: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", a[i][i]);
    }


    printf("\nSecondary diagonal elements: ");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", a[i][2 - i]);
    }

    printf("\n");
    return 0;
}

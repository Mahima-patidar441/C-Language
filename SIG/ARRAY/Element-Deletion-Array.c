#include <stdio.h>

int main()
{
    int a[10], i, n = 10, index;

    printf("Enter 10 elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter index (0 to 9) of element to delete: ");
    scanf("%d", &index);

    if(index < 0 || index >= n)   
    {
        printf("Invalid index!\n");
    }
    else
    {
        
        for(i = index; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--; 

        printf("\nArray after deletion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a[10], i, j;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nDuplicate elements are:\n");
    int found = 0;
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d\n", a[i]);
                found = 1;
                break;  
            }
        }
    }
    if(found == 0)
    {
        printf("No duplicate elements found.\n");
    }

    return 0;
}

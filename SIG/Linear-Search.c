#include<stdio.h>
int main()
{
    int a[] = {0,30,40,24,45,65,23,43,45,23}, i, n, f=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(a[i]==n)
        {
            f=1;
            break;            
        }
    }
    if(f==1)
    {
        printf("Element found at the %d index",i);
    }
    else
    {
        printf("Element not found ");
    }
    return 0;
}

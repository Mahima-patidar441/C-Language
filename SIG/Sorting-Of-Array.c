#include<stdio.h>
int main()
{
    int a[]={54,43,56,23,21,61}, i, j, temp;
    printf("Before sorting : ");
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<6; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAfter sorting : ");
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[]= { 50,60,40,30,75,29,35} , i , min ;
    min = a[0];
    for(i=1; i<7; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimum value from the array : %d ", min);
}

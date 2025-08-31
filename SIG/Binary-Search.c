#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int low = 0 , high = 9 , mid , n , f=0 ;

    printf("Enter the number : ");
    scanf("%d",&n);
    
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==n)
        {
            f=1;
            break;
        }
        else if(n>a[mid])
        {
            low = mid+1;
        }
        else if(n<a[mid])
        {
            high = mid-1;
        }
    }
    if(f==1)
    {
        printf("Element found at the %d index",mid);
    }
    else
    {
        printf("Element not found ");
    }
    return 0;
}

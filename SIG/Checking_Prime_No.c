#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Enter a no.: ");
    scanf("%d",&a);
    
    if(a<=0){
        printf("Given no. is not a prime no.");
    }
    else{
        for(int i=2; i<a; i++){
            if(a%i==0){
                b=0;
                break;
            }
        }
        if(b==0){
        printf("Given No. Is Not A Prime No.");
        }
        else{
        printf("Given No. Is A Prime No.");
        }
    }
}

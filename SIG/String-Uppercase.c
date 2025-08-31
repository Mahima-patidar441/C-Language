#include <stdio.h>
#include<string.h>


int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);   
   
    for(i = 0; i<strlen(str); i++)
    {
        if(str[i] >= 97 && str[i] <= 122)  
        {
            printf("%c", str[i] - 32); 
        }
        else
        {
        printf("%c", str);
        }
    }
    return 0;
}

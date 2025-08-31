#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int i = 0, j , f = 0;

    printf("Enter a string: ");
    gets(str);   
    j = strlen(str)-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
    }

    if(f == 0)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}

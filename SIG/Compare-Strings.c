#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter first string: ");
    gets(str1);   
    printf("Enter second string: ");
    gets(str2);

    if(strlen(str1) != strlen(str2))
    {
        flag = 1;
    }
    else
    {
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i]!=str2[i])
            {
                flag=1;
                break;
            }
        }
    }
   
    if(flag == 1)
        printf("Both strings are different.\n");
    else
        printf("Both strings are equal.\n");

    return 0;
}

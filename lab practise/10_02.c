#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[50];
    printf("Enter string: \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 'z' && str[i] >= 'a')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] <= 'Z' && str[i] >= 'A')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    return 0;
}
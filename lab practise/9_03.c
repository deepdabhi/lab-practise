#include <stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter:\n");
    gets(str1);
    printf("Enter: \n");
    gets(str2);
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';
    printf("%s", str1);
    return 0;
}
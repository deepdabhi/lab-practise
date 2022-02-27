#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "deep";
    char str2[50] = "deep";
    printf("%s\n%s\n", str1, str2);
    printf ("%d\n", strcmp(str1, str2));
    strcat(str1, str2);
    printf("%s\n", str1);
    strcpy(str2, str1);
    printf("%s\n", str2);
    strrev(str1);
    printf("%s\n", str1);
    return 0;
}
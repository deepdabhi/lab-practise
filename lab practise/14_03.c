#include <stdio.h>
int len(char *ptr);
int main()
{
    while (1)
    {
        char str1[100];
        char str2[100];
        char *ptr;
        int size1, size2;
        printf("Enter a string: \n");
        gets(str1);
        ptr = str1;
        size1 = len(ptr);
        printf("Enter another string: \n");
        gets(str2);
        ptr = str2;
        size2 = len(ptr);
        printf("%d %d\n", size1, size2);
    }
    return 0;
}
int len(char *ptr)
{
    int count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}
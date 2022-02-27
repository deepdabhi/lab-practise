#include <stdio.h>
int len(char *ptr);
int main()
{
    char string1[100];
    char string2[100];
    char *ptr;
    int size1, size2;
    printf("Enter a string: \n");
    gets(string1);
    ptr = string1;
    size1 = len(ptr);
    printf("Enter another sting: \n");
    gets(string2);
    ptr = string2;
    size2 = len(ptr);
    if (size1 < size2)
    {
        printf("%s is greater in size as compared to %s.\n", string2, string1);
    }
    else if (size2 < size1)
    {
        printf("%s is greater in size as compared to %s.\n", string1, string2);
    }
    else
    {
        printf("%s and %s both are of equal size.\n", string1, string2);
    }
    return 0;
}
int len(char *ptr)
{
    int count = 0;
    int couunt = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}
#include <stdio.h>
#include <string.h>
int occ(char *ptr, char ch);
int main()
{
    char ch, str[50];
    char *ptr = str;
    printf("Enter string:\n");
    gets(str);
    printf("Enter character:\n");
    scanf("%c", &ch);
    int a = occ(ptr, ch);
    printf("%d", a);
    return 0;
}
int occ(char *ptr, char ch)
{
    int i = 0;
    while (*ptr != '\0')
    {
        if (*ptr == ch)
        {
            i++;
        }
        ptr++;
    }
    return i;
}
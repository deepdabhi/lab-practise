#include <stdio.h>
int len(char str[], char *ch);
int main()
{
    char str[50];
    char *ch = str;
    printf ("Enter: \n");
    gets(str);
    printf ("%d", len(str, ch));
    return 0;
}
int len (char str[], char *ch)
{
    int l = 0;
    while (*ch != '\0')
    {
        l++;
        ch++;
    }
    return l;
}

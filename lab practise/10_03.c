#include <stdio.h>
#include <string.h>
void fun(char str[]);
int main()
{
    fun("nun");
    fun("deep");
    return 0;
}
void fun(char str[])
{
    int l = 0;
    int r = strlen(str) - 1;
    while (r > l)
    {
        if (str[r--] != str[l++])
        {
            printf("Not a palindrome.\n");
            return;
        }
    }
    printf("is a palindrome.\n");
}
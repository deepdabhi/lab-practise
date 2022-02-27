#include <stdio.h>
int power(int a, int b);
int main()
{
    int a = 2, b = 5;
    int c = power(a, b);
    printf("%d", c);
    return 0;
}
int power(int a, int b)
{
    int i = 0, mul = 1;
    while (i != b)
    {
        mul *= a;
        i++;
    }
    return mul;
}
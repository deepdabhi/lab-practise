#include <stdio.h>
int rec(int n);
int main()
{
    int n, i, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", rec(i));
    }
    return 0;
}
int rec(int n)
{
    if (n < 2)
    {
        return n;
    }
    return rec(n - 1) + rec(n - 2);
}
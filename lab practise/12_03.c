#include <stdio.h>
int fac(int n);
int main()
{
    int n;
    printf("enter n: \n");
    scanf("%d", &n);
    int a = fac(n);
    printf("%d", a);
    return 0;
}
int fac(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    int m = n * fac(n - 1);
    return m;
}
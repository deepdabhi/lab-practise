#include <stdio.h>
void sum(int *a, int *b);
int main()
{
    int a = 5, b = 4;
    printf("a = %d, b = %d\n", a, b);
    sum(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
void sum(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
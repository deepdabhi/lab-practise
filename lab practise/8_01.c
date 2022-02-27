#include <stdio.h>
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter: \n");
        scanf("%d", &a[i]);
    }
    int b[5];
    for (int j = 0, i = 4; j < 5, i >= 0; j++, i--)
    {
        b[j] = a[i];
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", b[j]);
    }
    return 0;
}
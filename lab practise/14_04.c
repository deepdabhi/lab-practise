#include <stdio.h>
int main()
{
    int arr[5], *ptr, i, sum = 0;
    ptr = arr;
    for (i = 0; i < 5; i++)
    {
        printf ("Enter n: \n");
        scanf ("%d", ptr);
        ptr++;
    }
    ptr = arr;
    for (i = 0; i < 5; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf ("%d", sum);
    return 0;
}
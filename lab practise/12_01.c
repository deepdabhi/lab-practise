#include <stdio.h>
int sum(int *ptr);
int main()
{
    int *ptr, i, ans;
    int arr[5] = {1, 2, 3, 4, 5};
    ptr = arr;
    ans = sum(ptr);
    return 0;
}
int sum(int *ptr)
{
    int i, sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("%d", sum);
}
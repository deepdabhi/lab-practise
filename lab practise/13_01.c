#include <stdio.h>
int sum(int *ptr1, int *ptr2);
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {5, 5, 5, 5, 5};
    int ans[5];
    int *ptr1, *ptr2, a, b, i;
    ptr1 = arr1;
    ptr2 = arr2;
    for (i = 0; i < 5; i++)
    {
        ans[i] = sum(ptr1, ptr2);
        ptr1++;
        ptr2++;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}
int sum(int *ptr1, int *ptr2)
{
    int sum = *ptr1 + *ptr2;
    return sum;
}
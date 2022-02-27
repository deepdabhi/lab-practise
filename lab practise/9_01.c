#include <stdio.h>
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    int ans[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        ans[i] = arr1[i] * arr2[i];
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
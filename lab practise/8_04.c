#include <stdio.h>
void bubble(int arr[]);
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter: ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void bubble(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5 - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}
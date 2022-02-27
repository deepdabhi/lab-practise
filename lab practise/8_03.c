#include <stdio.h>
int main()
{
    int ch, pos, i, num;
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter 1 to delete and 2 for insert: ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("Enter index: ");
        scanf("%d", &pos);
        for (i = pos; i < 4; i++)
        {
            a[i] = b[i + 1];
        }
        for (i = 0; i < 4; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    if (ch == 2)
    {
        printf("Enter index: ");
        scanf("%d", &pos);
        printf("Enter number: ");
        scanf("%d", &num);
        a[pos] = num;
        for (i = pos + 1; i < 6; i++)
        {
            a[i] = b[i - 1];
        }
        for (i = 0; i < 6; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
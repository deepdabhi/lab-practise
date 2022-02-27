#include <stdio.h>
typedef union deep
{
    int x;
    char name[20];
    char ch;
} data;
int main()
{
    data p1;
    data *p2 = &p1;
    p1.x = 68;
    printf("%d\n", sizeof(data));
    printf("%d\n", p1.x);
    printf("%d\n", p2->x);
    return 0;
}
#include <stdio.h>
int linearsearch(int *a, int n, int x)
{
    int l, h, m;
    l = 0;
    h = n - 1;
    m = (l + h) / 2;
    while (l <= h)
    {
        if (*(a + m) > x)
        {
            h = m;
            m = l + h / 2;
        }
        else if (*(a + m) < x)
        {
            l = m;
            m = l + h / 2;
        }
        else if (*(a + m) == x)
        {
            return m;
        }
    }
}
int main()
{
    int n, p, x;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];

    printf("Etner %d numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the searching element\n");
    scanf("%d", &x);
    p = linearsearch(a, n, x);
    printf("The position is %d\n", p);
    return 0;
}

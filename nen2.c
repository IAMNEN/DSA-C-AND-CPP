#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter Data");
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = i; j > 0 && a[j] < a[j - 1]; j--)
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
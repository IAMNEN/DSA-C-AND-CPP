#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int no[100], i, n, s, high = n - 1, low = 0, mid;
    printf("Enter No of Element ->");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the Data->");
        scanf("%d", &no[i]);
    }

    printf("Enter The Search data ->");
    scanf("%d", &s);

    mid = (high + low) / 2;
    if (no[mid] == s)
    {
        printf("Data found At %d index", mid);
    }
    else if (no[mid] > s)
    {
        high = mid - 1;
    }
    else
    {
        low = mid + 1;
    }
}
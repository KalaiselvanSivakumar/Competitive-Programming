#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_case;
    int size, maximum, count;
    scanf("%d", &test_case);
    while (test_case--)
    {
        scanf("%d", &size);
        int *arr = (int *) malloc(sizeof(int)*size);
        for(int i = 0; i < size; ++i)
        {
            scanf("%d", &arr[i]);
        }
        maximum = arr[0];
        count = 1;
        for(int i = 1; i < size; ++i)
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
                ++count;
            }
        }
        printf("%d\n", count);
    }
}

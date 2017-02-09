#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_case;
    int current_point[2];
    int i, total_paths;
    scanf("%d", &test_case);
    while (test_case--)
    {
        scanf("%d %d", &current_point[0], &current_point[1]);
        scanf("%d", &total_paths);
        int *paths = (int *) malloc(sizeof(int)*2*total_paths);
        for(i = 0; i < total_paths*2; ++i)
        {
            scanf("%d", &paths[i]);
        }
        for(i = 0; i < total_paths*2; i = i + 2)
        {
            current_point[0] -= paths[i];
            current_point[1] -= paths[i+1];
        }
        printf("%d %d\n", current_point[0], current_point[1]);
    }
}

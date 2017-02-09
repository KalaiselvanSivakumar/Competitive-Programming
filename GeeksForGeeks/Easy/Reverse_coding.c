#include <stdio.h>

int main()
{
    int test_case;
    int input, given_output;
    scanf("%d", &test_case);
    while (test_case)
    {
        scanf("%d %d", &input, &given_output);
        if (input * (input+1) /2 == given_output) {
            printf("1\n");
        }
        else {
          printf("0\n");
        }
        test_case -= 1;
    }
    return 0;
}

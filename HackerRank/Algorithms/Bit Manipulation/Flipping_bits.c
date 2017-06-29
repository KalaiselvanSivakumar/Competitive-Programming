#include <stdio.h>

int main() {
    int test_case;
    unsigned number;
    scanf("%ud", &test_case);
    while (test_case--) {
        scanf("%u", &number);
        number = ~number;
        printf("%u\n", number);
    }
    return 0;
}

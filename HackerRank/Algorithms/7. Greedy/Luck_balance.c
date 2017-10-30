#include <stdio.h>
#include <stdlib.h>

struct Preliminary {
    int luck_balance;
    int contest_importance;
};

int contest_comparator_function(const void *a, const void *b) {
    struct Preliminary a1 = *(struct Preliminary *)a;
    struct Preliminary b1 = *(struct Preliminary *)b;
    return b1.contest_importance - a1.contest_importance ? b1.contest_importance - a1.contest_importance
                                                          : b1.luck_balance - a1.luck_balance;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int no_of_preliminary_contests, maximum_important_losses;
    int i, maximum_luck = 0;
    scanf("%d %d", &no_of_preliminary_contests, &maximum_important_losses);
    struct Preliminary *preliminary_tests = (struct Preliminary *) malloc(sizeof(struct Preliminary) * no_of_preliminary_contests);
    for (i = 0; i < no_of_preliminary_contests; i++) {
        struct Preliminary contest;
        scanf("%d %d", &contest.luck_balance, &contest.contest_importance);
        *(preliminary_tests + i) = contest;
    }

    qsort(preliminary_tests, no_of_preliminary_contests, sizeof(struct Preliminary), contest_comparator_function);

    for(i = 0; i < no_of_preliminary_contests; i++) {
        struct Preliminary contest = *(preliminary_tests + i);
        if (contest.contest_importance && !maximum_important_losses) {
            maximum_luck -= contest.luck_balance;
        }
        else {
            if (contest.contest_importance) {
                --maximum_important_losses;
            }
            maximum_luck += contest.luck_balance;
        }
    }

    printf("%d\n", maximum_luck);

    free(preliminary_tests);
    return 0;
}

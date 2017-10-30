#include <stdio.h>
#include <stdlib.h>

int comparator(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int maximumToys(int prices_size, int* prices, int amount_remaining) {
    // Complete this function
    int number_of_toys = 0;
    qsort(prices, prices_size, sizeof(int), comparator);
    for (int prices_i = 0; prices_i < prices_size && amount_remaining >= prices[prices_i]; prices_i++) {
        amount_remaining -= prices[prices_i];
        number_of_toys++;
    }
    return number_of_toys;
}

int main() {
    int n;
    int k;
    scanf("%i %i", &n, &k);
    int *prices = malloc(sizeof(int) * n);
    for (int prices_i = 0; prices_i < n; prices_i++) {
       scanf("%i",&prices[prices_i]);
    }
    int result = maximumToys(n, prices, k);
    printf("%d\n", result);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int comparator(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}

int main() {
  int test_case;
  int n, k, i;
  int *arr;
  int currentNaturalNumber ;
  scanf("%d", &test_case);
  while (test_case--) {
    scanf("%d %d", &n, &k);
    arr = (int *) malloc(sizeof(int) * n);
    for(i = 0; i < n; i++) {
      scanf("%d", arr + i);
    }
    qsort(arr, n, sizeof(int), comparator);
    i = 0;
    currentNaturalNumber = 1;
    while (k && i < n) {
      if (arr[i] < currentNaturalNumber) {
        ++i;
      }
      else if (arr[i] == currentNaturalNumber) {
        ++i;
        ++currentNaturalNumber;
      }
      else {
        printf("%d ", currentNaturalNumber);
        ++currentNaturalNumber;
        --k;
      }
    }
    while (k) {
      printf("%d ", currentNaturalNumber);
      ++currentNaturalNumber;
      --k;
    }
    printf("\n");
    free(arr);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, shiftCount = 0;
    int *arr;
    scanf("%d\n", &n);
    arr = (int *) malloc(sizeof(int)*n);
    for(i = 0; i < n; ++i) {
      scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; ++i) {
      j = i - 1;
      while (j >= 0 && arr[j] > arr[j+1]) {
        arr[j + 1] = arr[j] ^ arr[j + 1];
        arr[j] = arr[j + 1] ^ arr[j];
        arr[j + 1] = arr[j] ^ arr[j + 1];
        --j;
        shiftCount++;
      }
    }
    printf("%d\n", shiftCount);
    free(arr);
    return 0;
}

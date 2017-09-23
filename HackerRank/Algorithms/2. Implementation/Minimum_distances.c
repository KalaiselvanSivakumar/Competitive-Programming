#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int inline min(int a, int b) {
  return (a < b ? a : b);
}

int main(){
    int n, i, j, minimum;
    scanf("%d",&n);
    int *A = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }

    //Logic
    minimum = INT_MAX;
    for(i = 0; i < n; i++) {
      for(j = i + 1; j < n; j++) {
        if (A[i] == A[j]) {
          minimum = min(minimum, abs(i - j));
        }
      }
    }
    free(A);

    if (minimum == INT_MAX) {
      printf("%d\n", -1);
    } else {
      printf("%d\n", minimum);
    }

    return 0;
}

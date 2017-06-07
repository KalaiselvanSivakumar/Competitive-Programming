#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, k;
  int *arr;
  int chargedAmount, actualChargableAmount;
  int i;
  scanf("%d %d", &n, &k);
  arr = (int *) malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    scanf("%d", arr+i);
  }
  scanf("%d", &chargedAmount);
  actualChargableAmount = 0;
  for (i = 0; i < n; i++) {
      actualChargableAmount += arr[i];
  }
  actualChargableAmount -= arr[k];
  actualChargableAmount /= 2;
  free(arr);
  if (actualChargableAmount == chargedAmount) {
    printf("Bon Appetit\n");
  } else {
    printf("%d\n", chargedAmount - actualChargableAmount);
  }
  return 0;
}

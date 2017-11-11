#include <stdio.h>
#include <stdlib.h>

int sockMerchant(int n, int* ar) {
    // Complete this function
    int socks[100] = {0};
    int i, totalSocksCanBeSold = 0;
    for (i = 0; i < n; i++) {
        socks[ar[i] - 1]++;
    }
    for (i = 0; i < 100; i++) {
        totalSocksCanBeSold += socks[i]/2;
    }
    return totalSocksCanBeSold;
}

int main() {
    int n;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}

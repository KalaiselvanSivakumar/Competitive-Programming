#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        scanf("%ld %ld",&b,&w);
        long x;
        long y;
        long z;
        scanf("%ld %ld %ld",&x,&y,&z);

        //Solution part
        if (x > (y + z)) {
          x = y + z;
        }
        else if (y > (x + z)) {
          y = x + z;
        }
        printf("%ld\n", (x * b) + (y * w));
    }
    return 0;
}

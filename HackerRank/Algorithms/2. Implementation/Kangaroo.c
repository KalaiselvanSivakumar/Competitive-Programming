#include <stdio.h>
#include <math.h>

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if (x1 < x2) {
      if (v1 <= v2) {
        printf("NO");
      }
      else {
        float value = ((x2 - x1) * 1.0) / (v1 - v2);
        if (ceil(value) == floor(value)) {
          printf("YES");
        }
        else {
          printf("NO");
        }
      }
    }
    else if (x1 > x2) {
      if (v1 >= v2) {
        printf("NO");
      }
      else {
        float value = ((x1 - x2) * 1.0) / (v2 - v1);
        if (ceil(value) == floor(value)) {
          printf("YES");
        }
        else {
          printf("NO");
        }
      }
    }
    else {
      printf("YES");
    }
    return 0;
}

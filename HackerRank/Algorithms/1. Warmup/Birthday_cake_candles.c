#include <stdio.h>
#include <stdlib.h>

int main(){
    //Code stub provided
    int n, height_i;
    scanf("%d",&n);
    int *height = malloc(sizeof(int) * n);
    for(height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }

    //Code starts
    int max = height[0];
    int count = 1;
    for (height_i = 1; height_i < n; height_i++) {
      if (height[height_i] == max) {
        ++count;
      }
      else if (height[height_i] > max) {
        max = height[height_i];
        count = 1;
      }
    }

    printf("%d\n", count);
    return 0;
}

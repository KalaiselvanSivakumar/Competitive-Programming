#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int anagram(char* s){
    // Complete this function
    int length = strlen(s);
    if (length % 2 == 0) {
        int i = 0, j = length - 1, diffCharsStr = 0;
        int charCountStr1[26], charCountStr2[26] = {0};
        memset(charCountStr1, 0, sizeof(charCountStr1));
        while (i < j) {
            charCountStr1[s[i] - 97]++;
            charCountStr2[s[j] - 97]++;
            ++i;
            --j;
        }
        for (i = 0; i < 26; ++i) {
            if (charCountStr1[i] != charCountStr2[i]) {
                diffCharsStr += abs(charCountStr1[i] - charCountStr2[i]);
            }
        }
        return diffCharsStr / 2;
    }
    return -1;
}

int main() {
    int q;
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = anagram(s);
        printf("%d\n", result);
    }
    return 0;
}

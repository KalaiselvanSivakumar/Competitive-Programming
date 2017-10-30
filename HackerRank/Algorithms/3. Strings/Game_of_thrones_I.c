#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* gameOfThrones(char* s){
    // Complete this function
    int alphabetCount[26];
    int i, oddCount = 0;
    memset(alphabetCount, 0, sizeof(alphabetCount));
    while (*s != '\0') {
        alphabetCount[*s - 97]++;
        s++;
    }
    for (i = 0; i < 26; i++) {
        if (alphabetCount[i] % 2 == 1) {
            oddCount++;
        }
    }
    if (oddCount <= 1) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = gameOfThrones(s);
    printf("%s\n", result);
    return 0;
}

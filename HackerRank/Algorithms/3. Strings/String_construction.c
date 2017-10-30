#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int stringConstruction(char* s){
    bool characters[26];
    int i = 0, minimumCost = 0;
    memset(characters, false, 26);
    while (s[i] != '\0') {
        if (!characters[s[i]-'a']) {
            characters[s[i]-'a'] = true;
            minimumCost++;
        }
        i++;
    }
    return minimumCost;
}

int main() {
    int q;
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = stringConstruction(s);
        printf("%d\n", result);
        free(s);
    }
    return 0;
}

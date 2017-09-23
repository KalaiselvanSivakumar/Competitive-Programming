#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k;
    scanf("%d",&k);

    int common_characters_length = 0;
    int i, j;
    int first_string_length = strlen(s), second_string_length = strlen(t);
    for (i = 0, j = 0; i < first_string_length && j < second_string_length && s[i] == t[j]; i++, j++);

    int number_of_characters_to_be_removed, number_of_characters_to_be_added, moves_taken;
    number_of_characters_to_be_added = first_string_length - i;
    number_of_characters_to_be_removed = second_string_length - j;
    moves_taken = number_of_characters_to_be_added + number_of_characters_to_be_removed;
    if (moves_taken == k) {
        printf("Yes\n");
    } else if (moves_taken < k) {
        if (((k - moves_taken) % 2 == 0) || ((k - moves_taken) > j * 2)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        printf("No\n");
    }
    return 0;
}

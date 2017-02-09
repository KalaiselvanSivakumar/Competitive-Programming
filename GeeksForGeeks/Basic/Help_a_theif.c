#include <stdio.h>
#include <stdlib.h>

int main() {
    int test_case;
    int theif_capacity, gold_boxes;
    int total_coins, i, j;
    scanf("%d", &test_case);
    while (test_case)
    {
        //Scanning input
        scanf("%d", &theif_capacity);
        scanf("%d", &gold_boxes);
        int *gold_plates = (int*) (malloc(sizeof(int)*gold_boxes));
        int *gold_coins = (int*) (malloc(sizeof(int)*gold_boxes));
        for(i=0; i<gold_boxes; ++i)
        {
            scanf("%d", &gold_plates[i]);
            scanf("%d", &gold_coins[i]);
        }

        //Logic Part
        //Sorting both gold_plates & gold_coins based on gold_coins
        for(i=0; i<gold_boxes-1; ++i)
        {
            for ( j = i+1; j < gold_boxes; ++j)
            {
                if (gold_coins[i] < gold_coins[j]) {
                    gold_coins[i] ^= gold_coins[j];
                    gold_coins[j] ^= gold_coins[i];
                    gold_coins[i] ^= gold_coins[j];
                    gold_plates[i] ^= gold_plates[j];
                    gold_plates[j] ^= gold_plates[i];
                    gold_plates[i] ^= gold_plates[j];
                }
            }
        }
        //Finding total_coins
        i=0;
        total_coins = 0;
        while (theif_capacity > 0) {
            if (theif_capacity > gold_plates[i]) {
                theif_capacity -= gold_plates[i];
                total_coins += (gold_plates[i] * gold_coins[i]);
                ++i;
            }
            else {
                total_coins += (gold_coins[i] * theif_capacity);
                theif_capacity = 0;
            }
        }

        //Displaying output
        printf("%d\n", total_coins);
        test_case -= 1;
    }

    return 0;
}

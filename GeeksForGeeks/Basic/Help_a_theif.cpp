#include <iostream>
#include <vector>
using namespace std;

int main() {
    int test_case;
    int theif_capacity, gold_boxes;
    int total_coins, i, j;
    cin >> test_case;

    while (test_case) {
        //Getting the inputs
        cin >> theif_capacity;
        cin >> gold_boxes;
        vector< vector<int> > gold_plates(gold_boxes, vector<int>(2));
        for (i = 0; i < gold_boxes; i++) {
            cin >> gold_plates[i][0] >> gold_plates[i][1];
        }

        //Logic Part
        //Sorting based on gold_coins
        for (i = 0; i < gold_boxes-1; i++) {
            for (j = i+1; j < gold_boxes; j++) {
                if (gold_plates[i][1] < gold_plates[j][1]) {
                    gold_plates[i][0] ^= gold_plates[j][0];
                    gold_plates[j][0] ^= gold_plates[i][0];
                    gold_plates[i][0] ^= gold_plates[j][0];
                    gold_plates[i][1] ^= gold_plates[j][1];
                    gold_plates[j][1] ^= gold_plates[i][1];
                    gold_plates[i][1] ^= gold_plates[j][1];
                }
            }
        }
        //Finding the total_coins
        i = 0;
        total_coins = 0;
        while (theif_capacity > 0) {
            if (theif_capacity > gold_plates[i][0]) {
                total_coins += gold_plates[i][0] * gold_plates[i][1];
                theif_capacity -= gold_plates[i][0];
                ++i;
            }
            else
            {
                total_coins += theif_capacity * gold_plates[i][1];
                theif_capacity = 0;
            }
        }

        //Display output
        cout << total_coins << endl;
        test_case -= 1;
    }
    return 0;
}

#Python 2.7

test_case = input()

while test_case:
    #Getting inputs
    theif_capacity = input()
    gold_boxes = input()
    temp = raw_input().split()
    gold_plates = []
    for i in range(0, len(temp)/2):
        t = [int(temp[i*2]), int(temp[i*2+1])]
        gold_plates.append(t)

    #Logic Part
    #Sorting based on gold coins
    for i in range(0, len(gold_plates)-1):
        for j in range(i+1, len(gold_plates)):
            if gold_plates[i][1] < gold_plates[j][1]:
                gold_plates[i][0] ^= gold_plates[j][0]
                gold_plates[j][0] ^= gold_plates[i][0]
                gold_plates[i][0] ^= gold_plates[j][0]
                gold_plates[i][1] ^= gold_plates[j][1]
                gold_plates[j][1] ^= gold_plates[i][1]
                gold_plates[i][1] ^= gold_plates[j][1]
    #Finding total coins
    total_coins = 0
    i = 0
    while theif_capacity:
        if theif_capacity > gold_plates[i][0]:
            total_coins += gold_plates[i][0] * gold_plates[i][1]
            theif_capacity -= gold_plates[i][0]
            i += 1
        else:
            total_coins += theif_capacity * gold_plates[i][1]
            theif_capacity = 0

    #Display output
    print (total_coins)
    test_case -= 1

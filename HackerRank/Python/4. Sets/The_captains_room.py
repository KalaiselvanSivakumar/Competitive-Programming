#Python 3

K = int(input())
rooms_list = [int(x) for x in input().split()]
rooms = set()
group_rooms = set()

for i in rooms_list:
    if i in rooms:
        group_rooms.add(i)
    else:
        rooms.add(i)

print (*(rooms - group_rooms))


'''
K = int(raw_input())

#Step 1
roomList = map(int,raw_input().split())

#Step 2
roomSet = set(roomList)

#Step 3
sumRoomSet = sum(roomSet)
sumRoomList = sum(roomList)

# Step 4
temp = sumRoomSet * K - sumRoomList

# Step 5
answer = temp / (K - 1)

# Step 6
print answer
'''

#Python 3

if __name__ == '__main__':
    N = int(input())
    my_list = []
    while N:
        temp_arr = input().strip().split()
        if temp_arr[0] == 'insert':
            my_list.insert(int(temp_arr[1]), int(temp_arr[2]))
        elif temp_arr[0] == 'print':
            print (my_list)
        elif temp_arr[0] == 'remove':
            my_list.remove(int(temp_arr[1]))
        elif temp_arr[0] == 'append':
            my_list.append(int(temp_arr[1]))
        elif temp_arr[0] == 'sort':
            my_list.sort()
        elif temp_arr[0] == 'pop':
            my_list.pop()
        else:
            my_list.reverse()
        N -= 1

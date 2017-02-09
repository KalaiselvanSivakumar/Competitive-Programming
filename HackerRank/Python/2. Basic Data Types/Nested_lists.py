#Python 3

if __name__ == '__main__':
    mark_list = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        mark_list.append([name, score])
    min1 = float("inf")
    min2 = float("inf")
    for i in range(0, len(mark_list)):
        if mark_list[i][1] < min1:
            min2 = min1
            min1 = mark_list[i][1]
        elif mark_list[i][1] == min1:
            continue
        elif mark_list[i][1] < min2:
            min2 = mark_list[i][1]
    result_list = [i[0] for i in mark_list if i[1] == min2]
    result_list.sort()
    print (*result_list, sep='\n', end='\n')

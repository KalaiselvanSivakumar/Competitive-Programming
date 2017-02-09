#Python 2.7

if __name__ == '__main__':
    test_case = input()
    while test_case:
        current_point = [int(x) for x in raw_input().split()]
        total_paths = input()
        paths = [int(x) for x in raw_input().split()]
        i = 0
        while i < len(paths):
            current_point[0] -= paths[i]
            current_point[1] -= paths[i+1]
            i += 2
        print current_point[0], current_point[1]
        test_case -= 1

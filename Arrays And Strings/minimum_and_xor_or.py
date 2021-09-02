testcases = int(input())

for testcase in range(testcases):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    minimum = pow(10, 9)
    for i in range(n - 1):
        j = i + 1
        if (arr[i] & arr[j]) ^ (arr[i] | arr[j]) < minimum:
            minimum = (arr[i] & arr[j]) ^ (arr[i] | arr[j])
    print(minimum)
testcases = int(input())
for i in range(testcases):
    n, k = list(map(int, input().split()))
    binString = input()
    maximum = ""
    displacement = None
    periodicity = None
    for i in range(n):
        if maximum < binString:
            maximum = binString
            displacement = i # first time the highest value is found
        elif maximum == binString:
            periodicity = i - displacement
            break
        binString = binString[1:] + binString[:1]
    
    if periodicity == None:
        print(displacement + (k-1)*n)
    else:
        print(displacement + (periodicity)*(k-1))

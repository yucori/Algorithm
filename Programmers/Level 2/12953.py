def solution(arr):
    answer = 1
    arr = sorted(arr)
    for i in range(0, len(arr)-1):
        temp = 2
        while(arr[i] != 1 and arr[i] >= temp):
            if arr[i] % temp == 0:
                answer *= temp
                arr[i] //= temp
                for j in range(i+1, len(arr)):
                    if arr[j] % temp == 0:
                        arr[j] //= temp
            else:
                temp += 1

    answer *= arr[-1]
    return answer
def solution(n):
    answer = 0
    num = []
    num_next = []
    num.append(n % 2)
    while n > 1:
        n = n//2
        num.append(n % 2)

    cnt = num.count(1)
    cnt_temp = 0

    while cnt != cnt_temp:
        temp = 1
        for i in range(0, len(num)):
            if temp == 1:
                if num[i] == 0:
                    num[i] = 1
                    temp = 0
                else:
                    num[i] = 0
                    temp = 1
                    if i == len(num)-1:
                        num.append(1)
                        break
        cnt_temp = num.count(1)

    for i in range(0, len(num)):
        answer += num[i] * (2**i)
    return answer

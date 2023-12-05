def solution(n):
    answer = 1
    temp = 0
    
    for i in range(1, n):
        temp = i
        for j in range(i+1, n+1):
            temp += j
            if temp >= n:
                if temp == n:
                    answer += 1
                break
    
    return answer
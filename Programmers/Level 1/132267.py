def solution(a, b, n):
    answer = 0
    temp = b * (n/a)
    
    while temp != 0:
        temp = b * int(n/a)
        n = int(n%a) + temp
        answer += temp
        
    return answer
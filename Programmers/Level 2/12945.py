def solution(n):
    answer = 0
    a, b = 0, 1
    for i in range(n-1):
        a, b = b, a+b
    return b % 1234567
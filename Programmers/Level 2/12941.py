def solution(A, B):
    answer = 0

    A.sort()
    B.sort()
    size = len(A)

    for i in range(size):
        answer += A[size-1-i] * B[i]

    return answer

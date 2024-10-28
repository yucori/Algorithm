## 풀이 1 (메모리: 89984 kb, 시간:	3092 ms)
a, k = map(int, input().split())
A = list(map(int, input().split()))
p, r = 0, a - 1
cnt = [0]

def check_and_print(value, cnt, k):
    cnt[0] += 1
    if cnt[0] == k:
        print(value)
        exit()

def merge_sort(A, p, r, cnt):
    if p < r:
        q = (p + r) // 2
        merge_sort(A, p, q, cnt)
        merge_sort(A, q + 1, r, cnt)
        merge(A, p, q, r, cnt)

def merge(A, p, q, r, cnt):
    i, j = p, q + 1
    tmp = []
    while i <= q and j <= r:
        if A[i] <= A[j]:
            check_and_print(A[i], cnt, k)
            tmp.append(A[i])
            i += 1
        else:
            check_and_print(A[j], cnt, k)
            tmp.append(A[j])
            j += 1

    while i <= q:
        check_and_print(A[i], cnt, k)
        tmp.append(A[i])
        i += 1

    while j <= r:
        check_and_print(A[j], cnt, k)
        tmp.append(A[j])
        j += 1

    for i in range(len(tmp)):
        A[p + i] = tmp[i]

merge_sort(A, p, r, cnt)
print(-1)

## 풀이 2 (메모리: 89736 kb, 시간: 316 ms)
n, k = map(int, input().split())
A = list(map(int, input().split()))

def find(start, end):
    global k
    if start == end:
        return
    mid = (start + end) // 2
    find(start, mid)
    find(mid+1, end)
    
    if k <= end - start + 1:
        tmp = sorted(A[start : end + 1])
        print(tmp[k-1])
        exit()
    k -= (end - start + 1)

find(0, n-1)
print(-1)

## 배운 점
# - 처음 풀이는 너무 문제대로만 풀려고 했다.(c기준이었음) 파이썬의 특징을 잘 활용하자
# - 파이썬에서 int는 불변이지만 list는 가변이다. 그래서 전역변수로 사용할 변수는 global 선언하여 사용한다.
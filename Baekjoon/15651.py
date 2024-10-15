#### 풀이 (메모리: 31120 kb, 시간: 1216 ms) ####
n, m = map(int, input().split())

temp = []

def dfs(depth):
    if depth == m:
        print(' '.join(map(str, temp)))
        return
    
    for i in range(1, n+1):
        temp.append(i)
        dfs(depth + 1)
        temp.pop()

dfs(0)

#### 배운 점 ####
# - 해당 문제는 전체 범위를 대상으로 계속해서 탐색하기에 for문 단축의 필요성이 비교적 낮았음
# - 동일한 문제 c++ 풀이는 이론 상으로 시간 복잡도가 O(n^m)으로 동일하지만, 컴파일 언어이기에 492 ms 시간이 소요되어 파이썬보다 빨랐음
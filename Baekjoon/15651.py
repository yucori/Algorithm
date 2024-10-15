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
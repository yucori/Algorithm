#### 풀이 1 (시간초과)
def cal(field, c, d, e, f):
  temp = 0
  for i in range(c-1, e):
    for j in range(d-1, f):
      temp += field[i][j]
  return temp

a, b = map(int, input().split())
field = [[0]*b for _ in range(a)]
ans = []
for i in range(a):
  field[i] = list(map(int, input().split()))
k = int(input())
for i in range(k):
  c, d, e, f = map(int, input().split())
  ans.append(cal(field, c, d, e, f))
  
for i in range(len(ans)):
  print(ans[i])

#### 풀이 2 (메모리: 38184 kb, 시간: 352 ms)
def cal(n, m):
  temp = [[0] * (m+1) for _ in range(n+1)]
  for i in range(1, n+1):
    for j in range(1, m+1):
      temp[i][j] = field[i-1][j-1] + temp[i-1][j] + temp[i][j-1] - temp[i-1][j-1]
  return temp

a, b = map(int, input().split())
field = [list(map(int, input().split())) for _ in range(a)]
temp = cal(a, b)
ans = []
k = int(input())
for i in range(k):
  c, d, e, f = map(int, input().split())
  result = temp[e][f] - temp[c-1][f] - temp[e][d-1] + temp[c-1][d-1]
  ans.append(result)
  
for i in range(len(ans)):
  print(ans[i])
  
#### 배운 점
# - 단순히 구현만 하기 보다는 시간 복잡도를 항상 염두하자
# - 누적합을 이해하기가 쉽지 않았다. 관련 문제를 더 풀이해보자
n, m = map(int, input().split())
cards = list(map(int, input().split()))
ans = 0

### 풀이 1 (메모리: 31120 kb, 시간: 72 ms) ####
def check(a, b, c, max):
  total = a+b+c
  if total <= max:
    return total
  return 0
  
for i in range(0, n-2, 1):
  for j in range(i+1, n-1, 1):
    for k in range(j+1, n, 1):
      temp = check(cards[i], cards[j], cards[k], m)
      if temp > ans:
        ans = temp
        
print(ans)


### 풀이 2 (메모리: 31120 kb, 시간: 32 ms) ####
cards.sort()

for i in range(n-2):
  a = i
  left = i+1
  right = n-1
  while left<right:
    total = cards[left] + cards[right] + cards[a]
    if total <= m:
      if total > ans:
        ans = total
      left += 1
    else:
      right -= 1
      
print(ans)


#### 배운 점 ####
# for 문은 역시나 시간이 굉장히 오래 걸린다. 특히나 중첩일 경우! 곱절로 연산 횟수를 늘리는 것보다 sort 한 번 더 하는게 당연히 더 빠르다
## 11729 하노이의 탑(31120 kb, 836 ms)
def hanoi(n, start, temp, end):
  if n == 0:
    return
  hanoi(n-1, start, end, temp)
  print(start, end)
  hanoi(n-1, temp, start, end)

n = int(input())
print((2**n)-1)
hanoi(n, 1, 2, 3)

## 배운 점
# 하노이의 탑 개념 자체에 대해서 어려움을 느꼈지만 로직을 한 번 제대로 이해하니 쉬워졌음
# 재귀에 대한 첫 걸음이라고 생각함
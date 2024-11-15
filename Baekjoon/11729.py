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
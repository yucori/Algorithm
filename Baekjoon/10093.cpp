a, b = map(int, input().split())
n1 = max(a, b)
n2 = min(a, b)
num = n1-n2-1
if n1 - n2 <= 1:
    num = 0
print(num)
for i in range(n2+1, n1):
    print(i, end=' ')


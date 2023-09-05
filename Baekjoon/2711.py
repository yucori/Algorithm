n = int(input())
for i in range(n):
    num, word = input().split()
    num = int(num)
    print(word[:num-1]+word[num:])
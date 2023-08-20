num = int(input())
for i in range(num):
    print(" "*i + "*"*((num-i)*2-1))
for j in range(num-1):
    print(" "*(num-2-j) + "*"*(2*(j+1)+1))
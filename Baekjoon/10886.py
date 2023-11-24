num = int(input())
agree = 0
for i in range(num):
    if int(input()) == 1:
        agree += 1
if agree > num//2:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")

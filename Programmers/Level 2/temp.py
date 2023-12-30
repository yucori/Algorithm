str1 = 'FRANCE'
str2 = 'french'
answer = 0
w1 = []
w2 = []
str1 = str1.lower()
str2 = str2.lower()
for i in range(1, len(str1), 2):
    temp = ''
    if ord(str1[i]) < 97 or ord(str1[i]) > 122:
        continue
    elif ord(str1[i-1]) < 97 or ord(str1[i-1]) > 122:
        continue
    else: 
        temp += str1[i-1]
        temp += str1[i]
        w1.append(temp)
        
for i in range(1, len(str2), 2):
        temp = ''
        if ord(str2[i]) < 97 or ord(str2[i]) > 122:
            continue
        elif ord(str2[i-1]) < 97 or ord(str2[i-1]) > 122:
            continue
        else: 
            temp += str2[i-1]
            temp += str2[i]
            w2.append(temp)
            
w1 = sorted(w1)
w2 = sorted(w2)
print(w1)
print(w2)
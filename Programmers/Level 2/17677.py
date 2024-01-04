def solution(str1, str2):
    same, total = 0, 0
    w1 = []
    w2 = []
    check = 1
    str1 = str1.lower()
    str2 = str2.lower()
    for i in range(1, len(str1)):
        temp = ''
        if ord(str1[i]) < 97 or ord(str1[i]) > 122:
            continue
        elif ord(str1[i-1]) < 97 or ord(str1[i-1]) > 122:
            continue
        else: 
            temp += str1[i-1]
            temp += str1[i]
            w1.append(temp)

    for i in range(1, len(str2)):
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
    if w1 == [] and w2 == []:
        same = 1
        total = 1

    for i in range(len(w1)):
        if w1[i] in w2:
            if check != 1:
                check -= 1
                continue
            else:
                cnt1 = w1.count(w1[i])
                cnt2 = w2.count(w1[i])
                same += min(cnt1, cnt2)
                total += max(cnt1, cnt2)
                check = cnt1
                w2 = w2[cnt2:]
        else:
            if check != 1:
                check -= 1
                continue
            total += 1

    total += len(w2)

    return int((same / total) * 65536)

def solution(s, skip, index):
    answer = ''
    skip_num = []
    skip = skip.strip()
    for i in range(len(skip)):
        skip_num.append(ord(skip[i]))

    for i in range(len(s)):
        num = ord(s[i])
        cnt = 0

        while cnt != index:
            num += 1
            if num > 122:
                num -= 26
            while num in skip_num:
                num += 1
                if num > 122:
                    num -= 26
            cnt += 1
        answer += chr(num)

    return answer

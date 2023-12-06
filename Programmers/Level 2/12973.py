def solution(s):
    temp = []
    for i in range(len(s)):
        if len(temp) == 0:
            temp.append(s[i])
        elif temp[-1] == s[i]:
            temp.pop()
        else:
            temp.append(s[i])
    if len(temp) == 0:
        return 1
    return 0
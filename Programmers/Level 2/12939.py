def solution(s):
    answer = ''
    num_list = []
    idx = 0

    for i in range(len(s)):
        if s[i] == ' ':
            num_list.append(int(s[idx:i]))
            idx = i

    num_list.append(int(s[idx:]))
    num_list.sort()
    answer += str(num_list[0]) + ' ' + str(num_list[-1])
    return answer

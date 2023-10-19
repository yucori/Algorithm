def solution(keymap, targets):
    answer = []
    keymap_list = []

    for i in range(len(keymap)):
        keymap_list.append(list(keymap[i]))

    for i in range(len(targets)):
        cnt = 0
        for j in range(len(targets[i])):
            k = 0
            temp = -1
            while k != len(keymap_list):
                if targets[i][j] in keymap_list[k]:
                    if temp != -1 and temp > keymap_list[k].index(targets[i][j]):
                        temp = keymap_list[k].index(targets[i][j])
                    elif temp == -1:
                        temp = keymap_list[k].index(targets[i][j])
                k += 1

            if temp == -1:
                cnt = -1
                break
            else:
                cnt += (temp + 1)
        answer.append(cnt)

    return answer

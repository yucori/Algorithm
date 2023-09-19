def solution(lottos, win_nums):
    answer = []
    num = lottos.count(0)
    lottos.sort()
    win = 0
    min = 0
    
    for i in range(num, 6):
        if lottos[i] in win_nums:
            win_nums.remove(lottos[i])
            win += 1
    
    if len(win_nums) < num:
        answer.append(7 - (win + len(win_nums)))
    else:
        if win == 0 and num == 0:
            answer.append(6)
        else:
            answer.append(7 - (win + num))
    
    if win == 0:
        answer.append(6)
    else:
        answer.append(7 - win)
    
    return answer
def solution(name, yearning, photo):
    answer = []
    score = {}
    temp = 0
    
    for i in range(0, len(name)):
        score[name[i]] = yearning[i]
        
    for i in range(0, len(photo)):
        for j in range(0, len(photo[i])):
            if photo[i][j] in score:
                temp+=score[photo[i][j]]
            else:
                continue
        answer.append(temp)
        temp = 0
    
    return answer
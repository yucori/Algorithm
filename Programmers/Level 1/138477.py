def solution(k, score):
    answer = []
    temp = []
    
    for i in range(0, len(score)):
        temp.append(score[i])
        temp.sort(reverse=True)
        if i<k:
            answer.append(temp[i])
        else:
            answer.append(temp[k-1])
    
    return answer
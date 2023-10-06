def solution(survey, choices):
    answer = ''
    types = ["R", "T", "C", "F", "J", "M", "A", "N"]
    score = [0, 0, 0, 0, 0, 0, 0, 0]
    
    for i in range(len(survey)):
        if choices[i] <= 3:
            score[types.index(survey[i][0])] += abs(4 - choices[i])
        elif choices[i] >= 5:
            score[types.index(survey[i][1])] += abs(4 - choices[i])
            
    for i in range(0, len(types), 2):
        if score[i] < score[i+1]:
            answer += types[i+1]
        else:
            answer += types[i]
    
    return answer
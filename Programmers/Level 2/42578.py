def solution(clothes):
    answer = 1
    type_list = []
    cnt = []
    for i in range(len(clothes)):
        if clothes[i][1] not in type_list:
            cnt.append(1)
            type_list.append(clothes[i][1])
        else:
            cnt[type_list.index(clothes[i][1])] += 1
    for i in range(len(cnt)):
        answer *= (cnt[i]+1)
        
    return answer-1
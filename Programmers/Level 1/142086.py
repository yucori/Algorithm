def solution(s):
    answer = []
    wdic = {}
    
    for idx, word in enumerate(list(s)):
        if word not in wdic:
            answer.append(-1)
            wdic[word] = idx
        else:
            answer.append(idx - wdic[word])
            wdic[word] = idx
    
    return answer
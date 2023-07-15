def solution(t, p):
    answer = 0
    
    ps = len(p)
    
    for i in range(0, len(t)-ps+1):
        if t[i:i+ps] <= p:
            answer+=1;
    
    return answer
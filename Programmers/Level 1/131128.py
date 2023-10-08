def solution(X, Y):
    answer = ''
    
    if len(X) > len(Y):
        temp = X
        X = Y
        Y = temp
        
    num = list(set(X))
    
    for i in range(len(num)):
        num1 = X.count(num[i])
        num2 = Y.count(num[i])
        if num1 > num2:
            answer += num[i]*num2
        else:
            answer += num[i]*num1
            
    if len(answer) == 0:
        return "-1"
    else:
        answer = list(answer)
        answer.sort(reverse=True)
        if answer[0] == "0":
            return "0"
        else:
            answer = "".join(answer)
            return answer

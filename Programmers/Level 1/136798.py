def solution(number, limit, power):
    answer = 1
    
    for i in range(2, number+1):
        cnt = 0
        left = 1

        while left <= i**(1/2):
            if i % left == 0:
                if left ** 2 == i:
                    cnt += 1
                else:
                    cnt +=2
            if cnt > limit:
                cnt = power
                break
            left += 1
            
        answer += cnt
    
    return answer
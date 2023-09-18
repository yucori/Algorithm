def solution(numbers, hand):
    answer = ''
    arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9], [10, 0, 12]]
    left = [1, 4, 7]
    right = [3, 6, 9]
    mid = [2, 5, 8, 0]
    temp = [0, 0]
    lf = [3, 0]
    rf = [3, 2]
    
    for i in range(0, len(numbers)):
      if numbers[i] in left:
        answer+='L'
        lf = [left.index(numbers[i]), 0]
      elif numbers[i] in right:
        answer+='R'
        rf = [right.index(numbers[i]), 2]
      else:
        temp = [mid.index(numbers[i]), 1]
        num1 = abs(lf[0]-temp[0])+abs(lf[1]-temp[1])
        num2 = abs(rf[0]-temp[0])+abs(rf[1]-temp[1])
        if num1<num2:
          answer+='L'
          lf = temp
        elif num1>num2:
          answer+='R'
          rf = temp
        else:
          if hand == "left":
            answer+='L'
            lf = temp
          else:
            answer+='R'
            rf = temp
    
    return answer
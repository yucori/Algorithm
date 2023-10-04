def solution(cards1, cards2, goal):    
    for i in range(0, len(goal)):
        if goal[i] in cards1 and goal[i] not in cards2:
            if goal[i] == cards1[0]:
                cards1.pop(0)
            else:
                return "No"
        elif goal[i] in cards2 and goal[i] not in cards1:
            if goal[i] == cards2[0]:
                cards2.pop(0)
            else:
                return "No"
        else:
            return "No"
    return "Yes"
            
    
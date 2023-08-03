def solution(board, moves):
    answer = 0
    list = []
    
    for i in range(0, len(moves)):
        for j in range(0, len(board)):
            if board[j][moves[i]-1] != 0: 
                list.append(board[j][moves[i]-1])
                if len(list)>1 and list[-1] == list[-2]:
                    answer+=2
                    list.pop()
                    list.pop()
                board[j][moves[i]-1] = 0
                break
    
    return answer
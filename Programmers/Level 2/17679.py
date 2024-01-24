def solution(m, n, board):
    answer = 0
    for i in range(m):
        board[i] = list(board[i])

    while True:
        trash = []
        for i in range(m-1):
                for j in range(n-1):
                    if board[i][j] == board[i][j+1] and board[i][j] != 'X':
                        if board[i][j] == board[i+1][j] == board[i+1][j+1]:
                            trash.append([i,j])
                            trash.append([i,j+1])
                            trash.append([i+1,j])
                            trash.append([i+1,j+1])
        trash = list(set(map(tuple, trash)))

        if len(trash) == 0:
            return answer
        else:
            for i in range(len(trash)):
                board[trash[i][0]][trash[i][1]] = 'X'
                answer += 1
            for i in range(m-1, 0, -1):
                for j in range(n):
                    if board[i][j] == 'X':
                        temp = i-1
                        if board[i-1][j] == 'X':
                            while temp > 0:
                                temp -= 1
                                if board[temp][j] != 'X':
                                    board[i][j], board[temp][j] = board[temp][j], board[i][j]
                                    break
                                else:
                                    board[i][j], board[i-1][j] = board[i-1][j], board[i][j]

    return answer
            
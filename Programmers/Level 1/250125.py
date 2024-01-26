def solution(board, h, w):
    answer = 0
    dh = [1, 0, -1, 0]
    dw = [0, 1, 0, -1]
    color = board[h][w]
    for i in range(4):
        if 0 <= h+dh[i] < len(board) and 0 <= w+dw[i] < len(board[0]):
            print(h+dh[i])
            if board[h+dh[i]][w+dw[i]] == color:
                answer += 1
            
    return answer
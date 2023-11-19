def solution(brown, yellow):
    total = brown + yellow

    for row in range(total-1, 0, -1):
        if total % row:
            continue
        column = total / row
        temp = (row-2) * (column-2)
        if temp == yellow:
            return [row, column]

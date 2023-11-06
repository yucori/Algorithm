def solution(wallpaper):
    x = []
    y = []
    y_len = len(wallpaper[0])

    for i in range(len(wallpaper)):
        for j in range(y_len):
            if wallpaper[i][j] == '#':
                x.append(i)
                y.append(j)

    answer = [min(x), min(y), max(x)+1, max(y)+1]

    return answer

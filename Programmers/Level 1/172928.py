def solution(park, routes):
    now = []
    height = len(park)
    length = len(park[0])

    for i in range(len(park)):
        if 'S' in park[i]:
            now.append(i)
            now.append(park[i].index('S'))

    for i in range(len(routes)):
        way = routes[i][0]
        times = int(routes[i][-1])
        if way == 'N':
            if now[0] - times < 0:
                continue
            else:
                for j in range(1, times+1):
                    if park[now[0] - j][now[1]] == 'X':
                        times = 0
                        break
                now[0] -= times

        elif way == 'S':
            if now[0] + times >= height:
                continue
            else:
                for j in range(1, times+1):
                    if park[now[0] + j][now[1]] == 'X':
                        times = 0
                        break
                now[0] += times

        elif way == 'W':
            if now[1] - times < 0:
                continue
            else:
                for j in range(1, times+1):
                    if park[now[0]][now[1] - j] == 'X':
                        times = 0
                        break
                now[1] -= times

        elif way == 'E':
            if now[1] + times >= length:
                continue
            else:
                for j in range(1, times+1):
                    if park[now[0]][now[1] + j] == 'X':
                        times = 0
                        break
                now[1] += times
    return now

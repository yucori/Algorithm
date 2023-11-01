def solution(n, m, section):
    answer = 0
    section_len = len(section)
    temp = []

    section.sort(reverse=True)

    while section_len != 0:
        for i in section:
            if i > section[0] - m:
                temp.append(i)
            else:
                break
        for j in temp:
            section.remove(j)
        temp.clear()
        if len(section) != section_len:
            section_len = len(section)
            answer += 1

    return answer

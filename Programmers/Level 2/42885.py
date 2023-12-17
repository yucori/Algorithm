def solution(people, limit):
    answer = 0
    people = sorted(people)
    start = 0
    end = len(people)-1
    while start < end:
        if people[start] + people[end] > limit:
            answer += 1
            if end == start + 1:
                return answer + 1
            end -= 1
        else:
            answer += 1
            start += 1
            end -= 1
            if start == end:
                return answer + 1
    return answer
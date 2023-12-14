def solution(n, words):
    answer = []
    submited = [words[0]]
    for i in range(1, len(words)):
        if words[i-1][-1] != words[i][0]:
            return [i%n + 1, i//n + 1,]
        if words[i] in submited:
            return [i%n + 1, i//n + 1]
        submited.append(words[i])

    return [0,0]
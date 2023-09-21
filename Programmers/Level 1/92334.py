def solution(id_list, report, k):
    answer = [0]*len(id_list)
    score = [0]*len(id_list)
    post = []
    posted = []
    arrested = []
    indexes = []

    report = list(set(report))
    
    for i in range(0, len(report)):
        posted.append(report[i].split(' ')[1])
        post.append(report[i].split(' ')[0])

    for i in range(0, len(id_list)):
        if posted.count(id_list[i]) >= k:
            arrested.append(id_list[i])

    for i in range(0, len(posted)):
        if posted[i] in arrested:
            answer[id_list.index(post[i])] += 1

    return answer
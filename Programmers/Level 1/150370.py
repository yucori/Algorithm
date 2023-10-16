def solution(today, terms, privacies):
    answer = []
    terms_split = []

    today = today.split(".")

    for i in range(len(terms)):
        terms_split.append(terms[i].split()[0])
        terms_split.append(terms[i].split()[1])

    for i in range(len(privacies)):
        valid = int(terms_split[terms_split.index(privacies[i][-1]) + 1])
        checking = privacies[i].split()[0]
        year = int(checking.split(".")[0])
        month = int(checking.split(".")[1])
        day = int(checking.split(".")[2])

        month += valid % 12
        year += valid// 12
        if month > 12:
            year += 1
            month -= 12
        day -= 1
        if day == 0:
            if month == 1:
                year -= 1
                month = 12
            else:
                month -= 1
            day = 28

        if int(today[0]) > year:
            answer.append(i+1)
            continue
        elif int(today[0]) == year:
            if int(today[1]) > month:
                answer.append(i+1)
                continue
            elif int(today[1]) == month:
                if int(today[2]) > day:
                    answer.append(i+1)
                    continue
            else:
                continue
        else:
            continue

    return answer
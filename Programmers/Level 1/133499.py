def solution(babbling):
    answer = 0
    
    for i in range(len(babbling)):
        word = babbling[i]
        last = ""
        idx = 0
        if len(word) < 2:
            continue
            
        while idx != len(word):
            if idx < len(word) - 1:
                if word[idx: idx + 2] == "ye" and last != "ye":
                    idx += 2
                    last = "ye"
                elif word[idx: idx + 2] == "ma" and last != "ma":
                    idx += 2
                    last = "ma"
                elif idx < len(word) - 2 and word[idx: idx + 3] == "aya" and last != "aya":
                    idx += 3
                    last = "aya"
                elif idx < len(word) - 2 and word[idx: idx + 3] == "woo" and last != "woo":
                    idx += 3
                    last = "woo"
                else:
                    break
            else:
                break

        if idx == len(word):
            answer += 1
        
    return answer
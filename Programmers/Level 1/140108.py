def solution(s):
    word = []
    letter = s[0]
    num1 = 1
    num2 = 0
    end = 0
        
    for i in range(1, len(s)):
        if num1 != num2:
            if s[i] == letter[0]:
                letter += s[i]
                num1 += 1
            else:
                letter += s[i]
                num2 += 1
        else:
            word.append(letter)
            end = i-1
            if i != len(s)-1:
                num1 = 1
                num2 = 0
                letter = s[i]

    if "".join(word) != s:
        word.append(s[len("".join(word)): len(s)])
            
    return len(word)
n = 2
words = ["tank", "kick", "kick", "know"] #[1,2]
answer = []
submited = [words[0]]
for i in range(1, len(words)):
    if words[i-1][-1] != words[i][0]:
        print([i%n +1, i//n + 1,])
        exit()
    elif words[i] in submited:
        print([i%n+1, i//n + 1])
        exit()

print([0,0])
def level2(word, check):
  num = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

  for i in range(0, len(word)):
   if ord(word[i])<97 or ord(word[i])>122:
    if word[i] not in check:
      if word[i] not in num:
        word = word.replace(word[i], " ")
      else:
        continue
  word = word.replace(" ", "")
  return word

def level3(word):
  word = list(word)

  for i in range(1, len(word)):
    if word[i] == ".":
      if word[i] == word[i-1]:
        word[i-1] = ""
  word = ''.join(word)
  return word

def level4(word):
  if word[0] == ".":
    word = word[1:]
    if len(word) <= 1:
      return word
  if word[-1] == ".":
    word = word[:len(word)-1]   
  return word

def level6(word):
  if len(word) >= 16:
    word = word[:15]
    if word[14] == ".":
      word = word[:14]   
  return word

def level7(word):
  end_w = word[-1]

  while len(word)<3 :
    word += end_w
  return word


def solution(new_id):
    new_id = new_id.lower()
    valid = ["-", "_", "."]

    new_id = level2(new_id, valid)
    new_id = level3(new_id)
    new_id = level4(new_id)

    if len(new_id) == 0:
      new_id += 'a'

    new_id = level6(new_id)
    new_id = level7(new_id)
    
    return new_id
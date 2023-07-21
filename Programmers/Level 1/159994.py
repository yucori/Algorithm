cards1 = ["i", "drink", "water"]
cards2 = ["want", "to"]
goal = ["i", "want", "to", "drink", "water"]

for i in range(0, len(goal)):
        if goal[i] == cards1[0]:
            cards1.pop(0) 
        elif goal[i] == cards2[0]:
            cards2.pop(0)   
        else:
            print("No")

            
print("Yes")
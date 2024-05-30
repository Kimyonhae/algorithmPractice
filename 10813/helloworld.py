[firstIn , secondIn] = input("").split(" ")

firstIn = int(firstIn)
secondIn = int(secondIn)
newArray = [res + 1 for res in range(firstIn)]

for res in range(secondIn):
    [first , second] = input("").split(" ")
    savedFirst = newArray[int(first) - 1]
    savedSecond = newArray[int(second) - 1]
    
    newArray[int(first) - 1] = savedSecond
    newArray[int(second) - 1] = savedFirst
    
print(" ".join(map(str, newArray)))
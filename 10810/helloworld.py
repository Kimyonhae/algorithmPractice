#5 4
#1 2 3
#3 4 4
#1 4 1
#2 2 2
in_first = input("").split(" ")

first_input = int(in_first[0])
second_input = int(in_first[1])
count = 0
newArray = []

while first_input > count:
    newArray.append(0)
    count += 1


count2 = 0
while second_input > count2:
    range_input = input("")
    second_split = range_input.split(" ")
    [first , second , three] = second_split
    first_range = int(first)
    second_range = int(second)
    while first_range <= second_range:
        newArray[first_range - 1] = int(three)
        first_range += 1
    count2 += 1
    
print(" ".join(map(str, newArray)))
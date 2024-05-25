in_result = input("").split(" ")


#10 5
first_input = int(in_result[0])
second_input = int(in_result[1])
newArray = []

in_second_input = input("").split(" ")

for res in in_second_input:
    if int(res) < second_input:
        newArray.append(res)

print(" ".join(newArray))

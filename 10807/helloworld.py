firstInput = input("")
first_input = int(firstInput)
count = 0
second_input = input("").split(" ")
if first_input == len(second_input):
    three_input = int(input(""))

    for checkNumber in second_input:
        if three_input == int(checkNumber):
            count += 1

    print(count)

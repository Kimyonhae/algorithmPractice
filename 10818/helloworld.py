in_first = int(input(""))
in_second = input("").split(" ")

int_in_second = [int(number) for number in in_second]

if len(int_in_second) == in_first:
    print(f"{min(int_in_second)} {max(int_in_second)}")

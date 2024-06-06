[firstIn , secondIn] = input("").split(" ")
rows = int(firstIn)
cols = int(secondIn)
array = [ [0 for _ in range(cols)] for _ in range(rows)]
array2 = [ [0 for _ in range(cols)] for _ in range(rows)]

array3 = [ [0 for _ in range(cols)] for _ in range(rows)]

for res in range(rows):
    value = input("").split(" ")
    for res2 in range(cols):
        array[res][res2] = int(value[res2])
    
for res in range(rows):
    value = input("").split(" ")
    for res2 in range(cols):
        array2[res][res2] = int(value[res2])
    

for res in range(rows):
    for res2 in range(cols):
        array3[res][res2] = array[res][res2] + array2[res][res2]

for result in array3:
    print(" ".join(map(str , result)))
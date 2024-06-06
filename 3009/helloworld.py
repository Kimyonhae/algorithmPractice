# 5.5
# 5.7
# 7.5 -> 7.7

arr1 = []
arr2 = []
result = []
for res in range(3):
    [x , y] = map(int ,  input("").split(" "))
    arr1.append(x)
    arr2.append(y)

if arr1.count(min(arr1)) > arr1.count(max(arr1)):
    result.append(max(arr1))
elif arr1.count(min(arr1)) < arr1.count(max(arr1)):
    result.append(min(arr1)) 
    
if arr2.count(min(arr2)) > arr2.count(max(arr2)):
    result.append(max(arr2))
elif arr2.count(min(arr2)) < arr2.count(max(arr2)):
    result.append(min(arr2))
    
    
print(" ".join(map(str, result)))
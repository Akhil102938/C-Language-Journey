a = [10, 20, 30, 40]

largestNo = a[0]
secondlargestNo = float('-inf')

for i in range(0, len(a), 1):
    if a[i] > largestNo:
        secondlargestNo = largestNo
        largestNo = a[i]

    elif a[i] != largestNo and secondlargestNo < a[i]:
        secondlargestNo = a[i]

print("Largest No. in list :", largestNo)
print("Second largest No. in list :", secondlargestNo)

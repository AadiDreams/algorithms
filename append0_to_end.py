n = int(input("size: "))
arr = []
print("elements: ")
while len(arr)<n:
    arr.append(int(input()))
print("Given: ",arr)
c = 0
rarr = []
for i in arr:
    if i == 0:
        c += 1
    else: 
        rarr.append(i)
for i in range(c):
    rarr.append(0)
print(rarr)

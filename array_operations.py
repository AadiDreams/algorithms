n = int(input("size: "))
arr = []
print("elements: ")
for i in range(n):
    arr.append(int(input()))
print("array:", arr)
sum = 0
count = 0
max = arr[0]
min = arr[0]
for i in range(n):
    sum += arr[i]
    if arr[i] == 0:
        count += 1
    if arr[i]>max:
        max = arr[i]
    if arr[i]<min:
        min = arr[i]
print("sum=",sum)
print("avg=",sum/n)
print("count of zero=",count)
print("max=",max)
print("min=",min)

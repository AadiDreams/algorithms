key=[]
n=int(input('Enter the limit: '))
for i in range(n):
        a=input('Enter the key: ')
        key.append(a)
value=[]
for i in range(n):
        a=input('Enter the value: ')
        value.append(a)
d={}
for i in range(n):
        d[key[i]]=value[i]
print(d)

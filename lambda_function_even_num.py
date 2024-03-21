a=[]
n=int(input('Enter the limit: '))
print('Enter values:')
for i in range(n):
        x=int(input())
        a.append(x)
print('Given list: ',a)
b=list(filter(lambda x: x%2==0,a))
print('Even numbers: ',b)

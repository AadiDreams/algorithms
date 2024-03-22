print('1-create a tuple')
print('2-create a tuple with single element')
print('3-change the element in tuple ')
t=()
x=int(input('Choose the index: '))
if x==1:
        l=list(t)
        n=int(input('Enter the limit: '))
        for i in range(n):
                a=input('Enter the value:')
                l.append(a)
        t=tuple(l)
        print(t)
elif x==2:
        n=input('Enter the element: ')
        t=(n,)
        print(t)
elif x==3:
        t=('a','b','c')
        print(t)
        l=list(t)
        c=int(input('Enter the index to be changed: '))
        d=input('Enter the new value: ')
        l[c-1]=d
        t=tuple(l)
        print(t)
else:
        print('Invalid input')

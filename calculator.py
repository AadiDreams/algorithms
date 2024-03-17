print('Enter values:')
a=int(input())
b=int(input())
print('1-Addition')
print('2-Subtraction')
print('3-Multiplication')
print('4-Division')
c=int(input('Enter the choice: '))
def add(x,y):
        print(x+y)
def sub(x,y):
        print(x-y)
def mul(x,y):
        print(x*y)
def div(x,y):
        print(x/y)
if c==1:
        add(a,b)
elif c==2:
        sub(a,b)
elif c==3:
        mul(a,b)
elif c==4:
        div(a,b)
else:
        print('Invalid choice')

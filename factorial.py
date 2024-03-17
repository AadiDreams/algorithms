n=int(input('Enter the number: '))
def fact(x):
        f=1
        for i in range(1,x+1):
                f=f*i
        print(n,'!=',f)
fact(n)

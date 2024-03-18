x=int(input("Enter the limit : "))
def fib(a):
        if (a<=1):
                return a
        else:
                return fib (a-1)+fib (a-2)
for i in range (0,x):
        print(fib(i))

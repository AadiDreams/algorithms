n=int(input('Enter the number: '))
def prime(x):
        p=0
        for i in range(2,x):
                if x%i==0:
                        p=1
                        break
        if p==1:
                print(n,'is not prime')
        else:
                print(n,'is prime')
prime(n)

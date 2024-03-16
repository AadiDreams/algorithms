n=int(input('Enter the number: '))
def perfect(x,i=1):
        if x==i:
                return 0
        elif x%i==0:
                return i+perfect(x,i+1)
        else:
                return perfect(x,i+1)
if n==perfect(n):
        print('Perfect number')
else:
        print('Not a perfect number')

a=int(input('Enter the first number: '))
b=int(input('Enter second number: '))
fa=[]
fb=[]
for i in range(1,a+1):
	if a%i==0:
		fa.append(i)
for i in range(1,b+1):
	if b%i==0:
		fb.append(i)
c=[]
for i in fa:
	if i in fb:
		c.append(i)
print('GCD of',a,'and',b,':',max(c))

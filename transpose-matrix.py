r=int(input('Enter the row size: '))
c=int(input('Enter the column size: '))
m=[]
t=[]
for i in range(r):
    a=[]
    print('Enter row ',i+1,'elements:')
    for j in range(c):
        a.append(int(input()))
    m.append(a)
    t.append(a)
print('Given matrix:')
for i in range(r):
    for j in range(c):
        print(m[i][j], end=' ')
    print()
print('Transpose matrix:')
for i in range(c):
    for j in range(r):
        t[i][j]=m[j][i]
        print(t[i][j], end=' ')
    print()

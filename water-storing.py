h = [1,6,4,3,2]
left = 0
right = len(h)-1
max_area = 0
while left < right:
    width = right - left
    area = min(h[left],h[right]) * width
    max_area = max(area,max_area)
    if h[left]<h[right]:
        left+=1
    else:
        right-=1
print(max_area)

nums = [0,0,0,0,0,0,0,0,0,0]
def add(s):
    if s == 0: 
        nums[0] += 1 
        return
    while s != 0:
        nums[s % 10] += 1
        s //= 10

a, b = map(int, input().split())

for i in range(a, b + 1):
    add(i)

for i in range(10):
    print("%d: %d" % (i, nums[i]))
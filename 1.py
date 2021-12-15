t = int(input())
while t:
    count = 0
    n, a, b, c, d = map(int, input().split())
    l = list(range(1, n + 1, 1))
    for i in range(len(l)):
        if (l[i] % a != 0) and (l[i] % b != 0) and (l[i] % c != 0) and (l[i] % d != 0):
            count += 1
    print(count)
    t -= 1
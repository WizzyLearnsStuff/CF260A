

a, b, n = tuple(map(int, input().split()))

if a % b == 0:
    print(a * (10 ** n))
    raise SystemExit

for i in range(n):
    add = ((a % b) * (10 % b)) % b
    add = (add != 0) * (b - add)

    if add > 9:
        print(-1)
        break
    a = a * 10 + add
else:
    print(a)

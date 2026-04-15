a, b, c = map(int, input().split())
d = int(input())

if c + d >= 60:
    b += (c + d) // 60
    c = ((d % 60) + c) % 60
    a = (a + b // 60) % 24

    if b >= 60:
        b = b % 60

else:
    c += d

print(a, b, c)
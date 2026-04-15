a, b = map(int, input().split())
c = int(input())

if b + c >= 60:
    a += (b + c) // 60
    b = (b + c) % 60
    if a > 23:
        a = (a % 23) - 1

else:
    b += c

print(a, b)

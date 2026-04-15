n = int(input())

for x in range(n):
    line = list(map(str, input().split()))
    ans = line[0]
    for i in range(len(line)):
        if i == 0:
            ans = float(line[i])
        elif line[i] == '@':
            ans *= 3
        elif line[i] == '%':
            ans += 5
        elif line[i] == '#':
            ans -= 7
    
    print(f"{ans:.2f}")
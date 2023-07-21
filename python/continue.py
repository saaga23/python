x = 5
count = 0
while x > 0 and count <= 10:
    y =int(input())
    if y == 25:
        continue
    x -= 1
    count += 1
    print('x =',x)
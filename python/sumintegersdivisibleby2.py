# A program to find the sum of integers in range 1-100 divisible by 2
sum1 = 0
for i in range(1,101):
    if i % 6 == 0:
        sum1 += 1
    else:pass
print(sum1)
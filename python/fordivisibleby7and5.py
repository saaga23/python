#a program to compute numbers divisible by 7 and 5
divisible_by=[]
# The range of the loop
for n in range(999,7001):
# Assigning the condition if divisible by 5 and 7
    if n % 7 == 0 and n % 5 == 0:
        divisible_by.append(n)
print('Numbers divisible by 7 and 5: ',divisible_by)
# aprogram to compute numbers
count = 999
divisible_by=[]
while 999< count < 7001:
    if count % 7 == 0 and count % 5 == 0:
        divisible_by.append(count)
        count += 1
print("Numbers divisible by 7 and a multiple of 5 in range 1000-7001",\
divisible_by)

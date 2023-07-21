import math, fastmath, time

start_time = time.clock()
for n in range(100000):
    math.sqrt(n)
print(time.clock() - start_time)

start_time = time.clock()
for n in range(100000):
    fastmath.sqrt(n)
print(time.clock() - start_time)
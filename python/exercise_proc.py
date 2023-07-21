def proc(n):
    if n < 1:
        return 1
    else:
        return proc(n/2) + proc(n - 1)
    
print(proc(0))
print(proc(1))
print(proc(2))
print(proc(3))
print(proc(5))
print(proc(10))
def next_int():
    cnt = 0
    cnt += 1
    return cnt
global_count = 0

def next_int2():
    global_count += 1
    return global_count

def main():
    for i in range(0, 5):
        print(next_int1(), next_int())
        
main()
from time import perf_counter
def longrunning_function():
    for i in range(1, 11):
        time.sleep(i/i**2)
        
start = perf_counter()
longrunning_function()
end = perf_counter()
execution_time = (end - start)
execution_time
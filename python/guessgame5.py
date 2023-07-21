#Write a guessing game
from random import randrange
from time import perf_counter
tries=0
luck=eval(input("please enter an integer value:"))
value=randrange(0,101)
start = perf_counter()
longrunning_function()
while value != luck:
    start = perf_counter()
    if luck < value:
        print("integer is lower than value")
    elif luck > value:
        print("integer is higher than value")
    luck=eval(input("please enter another integer value:"))
    tries+=1
if tries==0:
    print("your guess is correct","zero number of trials=",tries)
if tries > 0:
    print("your guess is correct","number of trials =",tries)
end = perf_counter()
execution_time = (end - start)
execution_time
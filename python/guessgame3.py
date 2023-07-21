#Write a guessing game
from time import clock
from random import randrange
tries=0
luck=eval(input("please enter an integer value:"))
value=randrange(0,101)
while value != luck:
    if luck < value:
        print("integer is lower than value")
    elif luck > value:
        print("integer is higher than value")
    luck=eval(input("please enter another integer value:"))
    tries+=1
if tries==0:
    print("your guess is correct","zero number of trials=","time taken to get the right answer",tries,clock() - start_time)
if tries > 0:
    print("your guess is correct","number of trials =",tries)
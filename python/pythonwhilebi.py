start = 1000
#Range of range 
stop = 7000
#initialize counter
counter = start
#checks until ending range is reached
while (counter <= stop ):
    #checks if number is divisible by 7 and 5
    if (counter % 7 == 0 and counter % 5 ==0):
        print("Numbers divisible by 7 and 5: ",counter)
    #increment counter
    counter += 1
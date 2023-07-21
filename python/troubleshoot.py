#troubleshoot.py
print("Help! my computer doesn't work!")
print("Does their computer make any sounds (fans,etc.)")
choice=input("Or show any lights? (y/n):")
# Troubleshoot control logic
if choice =='n': #The computer does not have any power
    print("plug it in if the problem persists.")
    print("please run this program again.")
else: #It is plugged in
    choice=input("is the switch in the \on\ position? (y/n):")
    if choice =='n': #the switch is off turn it on
        print('turn it on. If the problem persists')
        print('Please run this program again.')
    else: #The switch is on.
        choice=input('Does the computer has a fuse. (y/n):')
    if choice == "n": #No fuse
        choice = input("Is the outlet ok y/n:")
        if choice == "n":
            print('check the outlet circuit')
            print('breaker or fuse move to a')
            print('new outlet if necessary')
            print('please run this program again')
        else: #Beats me.
            print('consult a service technician')
    else: # check fuse 
        print('check the fuse.replace if')
        print('necessary . if the problem persists')
        print('persists then.')
        print('please run this program')
        #the computer has power 
        print('please consult a service technician')
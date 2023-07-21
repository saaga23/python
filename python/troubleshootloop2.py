#troubleshootloop2.py
print("Help my computer does not work!")
while True:
    print("Does the computer make any sounds (fans, etc.)")
    choice =input(" or show any light? (y/n)")
    # The troubleshooting control logic
    if choice == 'n': # The computer does not have any power
        choice = input("Is it plugged in?(y/n):")
        if choice == 'n': # It is not plugged in.plug it in
            print("plug it in")
        else: # It is plugged in
            choice = input("Is the switch in the\"on\" position? (y/n):")
            if choice == 'n': # the switch is off,turn it on!
                print("Turn it on")
            else: #The switch is on
                choice = input("Does the computer has a fuse(y/n):")
                if choice == 'n': #fix outlet
                    print("check the outlet's circuit ")
                    print("breaker or fuse. Move to a")
                    print("new outlet,if necessary, ")
                else:  #beats me!
                    print("please consult a service technician ")
                    break # Nothing else i can do,exit loop
            else:
    else: # The computer has power 
            print("Please consult a service technician.")
            break #nothing else I can do,exit loop
                
 #troubleshootloop.py
print("Help my computer doesnt work")
done=False #: Not Done Initially
while not done:
     print("Does the computer make any sounds, (fans,etc)")
     choice=input("Or show any lights? (y/n):")
# Troubleshooting control logic
     if choice == "n": #the computer does not have any power
          choice=input("Is it plugged in? (y/n):")
          if choice =='n': #The computer is not plugged,plug it in
               print("Plug it in")
          else: #plug it in
               choice=input('Is the switch in the \"on\" position,(y/n)')
               if choice == "n": #The switch is of turn it on
                    print("turn it on")
               else: #The sitch is off
                    choice=input("Does the computer has a fuse (y/n)")
                    if choice == "n": #Does not have a fuse
                         choice = ("Is the outlet ok?(y/n)")
                         if choice == "n" :#fix outlet
                              print("check the outlets circuit")
                              print("breaker or fuse move to a")
                              print("new outlet. if necessary")
                         else:#beats me
                              print("Please consult a service technician")
                              done=True #nothing else i can do
                    else: #check fuse
                         print("check the fuse.replace if")
                         print("Necessary")
     else: #The computer has power
          print("please consult a service technician")
          done= True

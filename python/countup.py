#: countup.py
# counts up from zero. The user continue the count by entering 
#'Y'. THe user discontinues the count by entering 'N'
count = 0 #the present count
entry = 'y'
while entry != 'N' and entry !='n':
    #print the current value count 
    print(count)
    entry=input('please enter "y" to continue or "n" to quit:')
    if entry == 'Y' or entry == "y" :
        count += 1
    #check for bad entry
    elif entry != "n" and entry != "N" :
        print('"'+ entry + '"' "is not a valid choice")
    #else must be "n" or N
    
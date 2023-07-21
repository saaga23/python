#allow users to enter integer of non negative number
#integers. The user ends the list with a negative
#integer at the end of the non-negative sum
#numbers entered is displayed.the program prints
#zero if the user produces a non negative number
entry=0 #Ensure the loop is entered
sum = 0 #initialise sum

#request input from user
print("Enter number to sum ;negative number ends list")

while entry >= 0:    # a negative number exits the loop
    entry=int(input())  #Get the value
    if entry >= 0:   #is the number nonnegative 
        sum += entry    #only add if its non negative
print("sum is",sum)   #display the sum
# addmiddleexit.py
# Allow the user to enter a sequaence of nonneganumber. 
#Numbers. The user ends the list with a negative 
#number. At the end the sum of the nonnegative
#numbers entered is displayed. The program prints
#Zero if the user provides no nonnegative   

entry = 0       #Ensure the loop is entered
sum = 0    #Initialize sum

#   Request input from the user
print("Enter numbers to sum, negative numbers end list: ")
 
while True:#Loop forevr ? Not really
    entry = int(input())  #Get the value
    if entry < 0:          # Is number negative number ?
        break       # If so exit the loop  
    sum += entry # Display the sum
print("sum =",sum)   #Display the sum    
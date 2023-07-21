#file converter

#Get thenumber of seconds
seconds=int(input('enter integer of seconds:'))
#first compute the given number of hours in seconds
#note;integer division with possible truncation.
hours=seconds // 3600 #3600 seconds=1 hour
#compute the remaining seconds after the hours has been converted
seconds=seconds % 3600
#next,compute the number of minutes in the number of seconds
minutes=seconds // 60 #60 seconds=1 minute
seconds=seconds % 60 
#report the result
print(hours,"hrs",minutes,"min",seconds,"sec")
#file converter

#Get thenumber of seconds
seconds=int(input('enter integer of seconds:'))
#first compute the given number of hours in seconds
#note;integer division with possible truncation.
hours=seconds // 3600 #3600 seconds=1 hour
seconds=seconds % 3600
minutes=seconds // 60
seconds=seconds % 60
print(hours,"hrs",minutes,"min",seconds,"sec")
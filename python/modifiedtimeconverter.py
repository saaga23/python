# Fileenhancedtimecoverter.py

#Get the number of seconds
seconds=int(input("please enter the number of seconds:"))
#First compute the number of hours in seconds
# Note;interger dvision with possible truncation
hours=seconds//3600 #3600 seconds = 1 hour
#compute the remaining seconds after the hour has been accounted for
seconds=seconds % 3600
#Next compute the remaining number of minutes in seconds
minutes=seconds//60 #60 seconds = 1 minute
#compute the remaining seconds after the minutes areaccounted for
seconds=seconds % 60
#report the results
print(hours,":",sep="",end="")
# compute tens  digits of minutes
tens=minutes // 10
#compute ones digits of minutes
ones=minutes % 10
#compute degits of seconds
tens=seconds // 10
#one digits of seconds
ones=seconds % 10
print(tens,ones,sep="")
#SUNDAY ASPITA ABRAHAM
#BU21CSC2006
#Sim registration form
#Take input of user information
print('PLEASE ENTER YOUR CORRECT DETAILS')
name=str(input('Enter your name:'))
gender=str(input('Enter your gender(male/female): '))
marital_status=str(input('Enter your marital status(single/married): '))
date_of_birth=str(input('Enter your date of birth: '))
house_address=str(input('Enter your home address: '))
parents_number=str(input('Enter your parents number: '))
nin=str(input('Enter your "National Identification Number: "'))
#Display user information
print()
print("Name:",name,"\n",'Gender:',gender,"\n","Marital status",marital_status)
print("Date of birth:",date_of_birth,"\n","House address:",house_address)
print("Parents phone number:",parents_number,"\n""National identification number:",nin)
question=str(input("Is the above information correct (yes/no):"))
#Ask if information display is correct
if question == "yes":
    print('"Thank you for choosing MTN"')
else:
    print('Run the program again')
#calculator.py
def help_screen():
    """
    Displays information about how the program works.
    Accepts no parameters.
    Returns nothing.
    """
    print("Add: Adds two numbers")
    print("Subrtract: Subtracts two numbers")
    print("print: Displays the result of the latest operation")
    print("Help: Displays this help screen")
    print("Quit: Exits the program")


def menu():
    """
    Displays a menu
    Accepts no parameters
    Returns the string entered by the user.
    """
    return input("=== A)dd s)ubtract p)rint H)elp Q)uit === ")


def main():
    """ Runs a command loop that allows users to perform simples arithmetic. """
    result = 0.0
    done = False  #Initially not done
    while not done:
        choice = menu()   #Get user's choice
        
        if choice == "A" or choice == "a":  # Addition
            arg1 = float(input("Enter arg 1"))
            arg2 = float(input("Enter arg 2:"))
            result = arg1 + arg2
            print(result)
            
        elif choice =="s" or choice =="s":  # subtaction
            arg1 = float(input("Enter arg 1: "))
            arg2 = float(input("Enter arg 2: "))
            result = arg1 - arg2
            print(result)
        elif choice == "p" or choice == "p": # Print
            print(result)
        elif choice == "H" or choice == "h": # help 
            help_screen()
        elif choice == "Q"or choice == "q": # Quit
            done = True
main()
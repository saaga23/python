try:
    val = int(input("Pleaase enter a small positive integer: "))
    print('You entered',val)
    [][2] = 5 #Try to assign to a nonexistant index of the empty list
except ValueError:
    print("Input not accepted")
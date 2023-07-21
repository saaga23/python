def get_int_in_range(low, high):
    """ Obtains an integer values from the user. Acceptable values must fall
    within the specified range low...high...."""
    val = int(input())
    while val < low or val > high:
        print('[Value out of range , please try again:', end='')
        val = int(input()) #Can raise a ValueError
    return val

def create_list(n, min, max):
    """ Allows the user to create a list of n elements consisting of integers in the 
    range min..."""
    result = []
    while n > 0: #Count down to xero
        print('Enter integer in the range {}...{}:'.format(min, max),end=' ')
        result.append(get_int_in_range(min, max))
        n -= 1
    return result

def main():
    """ Create a list of two elements supplied by the user
    each element in the range 10 ...20 """
    lst = create_list(2, 10, 20)
    print(lst)
#comparerolls.py
from random import randint
from functools import partial

def read_file(filename, n , val):
    """ Reads n integers from the text file named filename.
        Returns the number of the times val appears in the file ."""
    count, read = 0,0
    with open(filename, 'r') as f:
        for value in f.readlines():
            read += 1
            # Have we read enough values in yet?
            if read > n:
                break
        # Convert text integer into an actual integer
            if int(value) == val:
                count += 1
    return count
def roll(n, val):
    """ Simulates the roll of a pair of dice n times.
        Returns the numbers of times a roll resulted in val. """
    count = 0
    for i in range(n):
        roll = randint(1, 6) + randint(1, 6)
        if roll == val:
            count += 1
        return count
    
def run_trials(f, n):
    """ Performs n experiment using function f as the source of outcomes. Counts the number of occurances of each possible outcome. """
    for value in range(2, 13):
        print("{:>3}:{:>5}".format(value, f(n, value)))
        
# Compare the actual experiments to the simulation
number_of_trials = 100
print('---Pseudorandom number rolls ---')
run_trials(roll, number_of_trials)
print('--- Actual eperimental data ---')
run_trials(partial(read_files, 'dicedata.data'), number_of_trials)
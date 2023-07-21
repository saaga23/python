# printprimesforelse.py
max_value = int(input('Display primes up to what value? '))
for value in range(2, max_value + 1):
    # see if value in prime: try all possible factors from 2 to value - 1
    for trial_factor in range(2, value):
        if value % trial_factor == 0:
            break   # Found a factor no need to continue: it is not prime
    else:
        print(value, end= ' ')  # Display the prime number
print() # Move cursor down to next line
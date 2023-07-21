def gcd(num1, num2):
    # Determine the smaller of num1 and num2
    min = num1 if num1 < num2 else num2
    # 1 definitely is acommon factor to all ints
    largest_factor = 1
    for i in range(1, min + 1):
        if num1 % i == 0 and num2 % i == 0:
            largest_factor = i  # Found larger factor
    return largest_factor



num1=int(input("please enter first integer:"))
num2=int(input("Please enter second integer:"))
solve=gcd(num1,num2)
print(gcd)
#countvowelselse.py
word = input('Enter text (no X\'s. please): ')
vowel_count = 0
for c in word:
    if c == 'A' or c == 'a' or c == 'E' or c == "e" \
       or c == "I" or c == 'i' or c == 'o' or c == 'O'\
       or c == "u" or c == "U":
        print(c,',', sep='',end='')
        vowel_count += 1
    elif c == 'X' or c =='x':
        print('X is not allowed')
        break
else:
    print('(',vowel_count, ' vowels)' , sep='')

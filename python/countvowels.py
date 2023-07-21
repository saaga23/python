#countvowels.py
word = input('Enter text: ')
vowel_count = 0
for c in word:
    if c == 'A' or c == 'a' or c == 'E' or c == 'e' \
       or c =='I' or c== 'i' or c == 'O' or c == 'o' \
       or c == 'U' or c == 'u':
        print(c,',', sep='', end='') # print the vowel
        vowel_count += 1
print(' (',vowel_count, 'vowels)', sep='')
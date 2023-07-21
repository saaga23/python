#abusefor.py
for i in range(10):
    print(i, end=" ") #print i as served by the range object
    if i == 5:
        i = 20 #change i inside the loop?
    print('({})'.format(i), end=" ")
print()
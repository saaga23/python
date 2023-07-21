#funcmemory
count = 0  # A global variable

def remember():
    global count
    count += 1 # count this invocation
    print('calling remember (#' + str(count) + ')')

print('begininig program')
remember()
remember()
remember()
remember()
remember()
remember()
remember()
remember()
print('Ending program')

def gen():
    yield 3
    yield 'wow'
    yield -1
    yield 1, 2
    
for i in gen():
    print(i)
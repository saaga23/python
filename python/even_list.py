even_list=[]
for item in range(1,12):
    if item == 6:
        continue
    
    while item % 2 == 0:
        even_list.append(item)
        break
print(even_list)
count = 0
listi=[]
for i in range(0, 100):
   while i <= 100 and count < 10:
      if i == 20:
         break
      elif i % 5 == 0 and i % 2 == 0:
         listi.append(i)
         print(listi)
      count += 1
         
rownum = int(input("Input number of rows: "))
colnum = int(input("Input number of columns: "))
multiList = [[0 for col in range(colnum)] for row in range (rownum)]

for row in range(rownum):
    		for col in range(colnum):multiList[row][col] = row * col
        
print(multiList)

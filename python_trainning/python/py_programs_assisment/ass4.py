num1 = input("enter number of rows : ")
num2 = input("enter number of columns : ")
num3 = [[0 for c in range(num2)] for r in range(num1)]

for r in range(num1):
	for c in range(num2):
		num3[r][c] = r * c
print num3

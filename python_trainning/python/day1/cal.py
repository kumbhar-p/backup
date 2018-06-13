
x = input()
y = input()

print '1. add 2. sub 3. mul 4. div 5.exit'
op = input()

if op == 1:
	res = x + y
	print res
else:
	if op == 2:
		res = x - y
		print res
	else:
		if op == 3:
			res = x * y
			print res
		else:
			if op == 4:
				res = x / y
				print res
			else:
				if op == 5:
					'exited'


import sys
s = 0
m = 1
print "1. simple calc 2. sci calc 3. exit"
op = input()
if op == 1:
	print "1. add 2. sub 3. mul 4. div 5. go back"
	op1 = input()
	if op1 == 1 :
		for i in range(1,len(sys.argv)):
        		s += int(sys.argv[i])
		print s	
	elif op1 == 2 :	
		for i in range(1,len(sys.argv)):
        		s = (-s) - int(sys.argv[i])
		print s
	elif op1 == 3 :	
		for i in range(1,len(sys.argv)):
        		m *= int(sys.argv[i])
		print m
	elif op1 == 4 :
        	m = int(sys.argv[1]) /int(sys.argv[2])
		print m
	else :
		print "exit"
elif op == 2:

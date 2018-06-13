try :
	a = 10/0
	a = 10/1
except ZeroDivisionError :
	print "Divide by zero occured"
else :
	print "in else block"
	import sys
	sys.exit()
finally :
	print "in finally block"

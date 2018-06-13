try :	
	fil_han = open("fil_hand","r")
except IOError :
	print "IoError"
else :
	print "in else block"
	import sys
	sys.exit()
finally :
	print "in finally block"
	
try :
	a = 10/0
except ZeroDivisionError :
	print "zero division error"
else :
	print "in else block"
	import sys
	sys.exit()
finally :
	print "in finally block"
	

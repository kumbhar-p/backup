try :
	a = [1,2,3]
	print a[3]
except IndexError :
	print "index error"
else :
	print "in else block"
	import sys
	sys.exit()
finally :
	print "in finally block"

try :
	raise RuntimeError	#runtime error can only occur when someone writes
except RuntimeError :
	print "run time error"
else :
	print "in else block"
	import sys
	sys.exit()
finally :
	print "in finally block"

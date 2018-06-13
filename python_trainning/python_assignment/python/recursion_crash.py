c=0
def fun1():
	global c
	if c==998:
		return
	print "Hello"
	c=c+1
	fun1()

fun1()

class A:
	def __init__(self, x) :
		self.x = x
		
	def fun (self) :
		print "in class A"
		return self.x
class B:
	def __init__(self, y) :
		self.y = y
	def fun1 (self) :
		print "in class B"

class c(A,B):
	pass
myclass = c(10)
print myclass.fun()
myclass.fun1()


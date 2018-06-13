class A :
	def __init__(self):
		self.x = 10
		self._y = 20
		self.__z = 30
	def fun(self):
		print "in fun"
	def _fun1(self):
		print "in fun1"
	def __fun2(self):
		print "in fun2"

m = A()
print m.x
print m._y
print m._A__z
m.fun()
m._fun1()
m._A__fun2()

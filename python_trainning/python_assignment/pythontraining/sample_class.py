#Introduction to class

class A:
	def __init__(self):
		self.x=10 #public
		self._y=20 #semi private
		self.__z=30 #fully private
	
	def fn1(self): #public
		print "In fn1"
	
	def _fn2(self): #semi private
		print "In _fn2"
	
	def __fn3(self):#fully private
		print "In __fn3"

m=A()
print m.x
print m._y
print m._A__z #print m.__z
m.fn1()
m._fn2()
m._A__fn3() #m.__fn3()


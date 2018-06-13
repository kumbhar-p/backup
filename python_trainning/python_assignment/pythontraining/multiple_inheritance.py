class A:
	def __init__(self,x,y):
		self.x=x
		self.y=y
	def add(self):
		return self.x+self.y

#a=A(20,30)
#print a.add()

class B:
	def __init__(self,x,y):
		self.x=x
		self.y=y
	def mul(self):
		return self.x*self.y

#b=B(1,2)
#print b.mul()

class C(A,B):
	def __init__(self,x,y):
		A.__init__(self,x,y)
		B.__init__(self,x,y)

c=C(7,8)
print c.add()
print c.mul()




